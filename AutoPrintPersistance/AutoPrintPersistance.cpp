#include "pch.h"

#include "AutoPrintPersistance.h"

using namespace System;
using namespace System::IO;
using namespace System::Collections::Generic;
using namespace AutoPrintModel;
using namespace AutoPrintPersistance;
using namespace System::Xml::Serialization;
using namespace System::Runtime::Serialization::Formatters::Binary;

SqlConnection^ AutoPrintPersistance::Persistance::GetConnection()
{
    SqlConnection^ conn = gcnew SqlConnection();
    String^ password = "qcfie5Pv";
    conn->ConnectionString = "Server=200.16.7.140;Database=a20191288;User ID=a20191288;Password=" +
        password + ";";
    conn->Open();
    return conn;
}

/*Ricardo y Luis*/
void AutoPrintPersistance::Persistance::PersistTextFile(String^ fileName, Object^ persistObject)
{
    FileStream^ file;
    StreamWriter^ writer;
    file = gcnew FileStream(fileName, FileMode::Create, FileAccess::Write);
    writer = gcnew StreamWriter(file);
    if (persistObject->GetType() == List<User^>::typeid) {
        List<User^>^ users = (List<User^>^) persistObject;
        for (int i = 0; i < users->Count; i++) {
            User^ u = users[i];
           

            writer->WriteLine( u->Name + ","
                + u->LastName + "," + u->Email + ","+ u->Dni+ "," + u->Password + "," + u->Money_in_wallet);
        }
        
    }
    if (writer != nullptr) writer->Close();
    if (file != nullptr) file->Close();
}

Object^ AutoPrintPersistance::Persistance::LoadTextFile(String^ fileName)
{
    FileStream^ file;
    StreamReader^ reader;
    Object^ result;
    if (System::IO::File::Exists(fileName)) {
        file = gcnew FileStream(fileName, FileMode::Open, FileAccess::Read);
        reader = gcnew StreamReader(file);
        if (fileName->Equals(USER_FILE_NAME)) {
            result = gcnew List<User^>();
            while (true) {
                String^ line = reader->ReadLine();
                if (line == nullptr) break;
                array<String^>^ record = line->Split(',');
                User^ user = gcnew User();
                //user->User_Id = Convert::ToInt32(record[0]);
                user->Name = record[1];
                user->LastName = record[2];
                user->Email = record[3];
                user->Dni = Int32::Parse(record[4]);
                user->Password = record[5];
                user->Money_in_wallet = Double::Parse(record[6]);


                ((List<User^>^)result)->Add(user);
            }
        }
        if (reader != nullptr) reader->Close();
        if (file != nullptr) file->Close();
    }
    return result;
}

void AutoPrintPersistance::Persistance::PersistXMLFile(String^ fileName, Object^ persistObject)
{
    StreamWriter^ writer;
    try {
        writer = gcnew  StreamWriter(fileName);
        if (persistObject->GetType() == List<Employee^>::typeid) {
            XmlSerializer^ xmlSerializer = gcnew XmlSerializer(List<Employee^>::typeid);
            xmlSerializer->Serialize(writer, persistObject);
        }
        if (persistObject->GetType() == List<Boss^>::typeid) {
            XmlSerializer^ xmlSerializer = gcnew XmlSerializer(List<Boss^>::typeid);
            xmlSerializer->Serialize(writer, persistObject);
        }
        if (persistObject->GetType() == List<Customer^>::typeid) {
            XmlSerializer^ xmlSerializer = gcnew XmlSerializer(List<Customer^>::typeid);
            xmlSerializer->Serialize(writer, persistObject);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally { //Es el más importante
        if (writer != nullptr) writer->Close();
    }
}

Object^ AutoPrintPersistance::Persistance::LoadXMLFile(String^ fileName)
{
    StreamReader^ reader;
    Object^ result;
    XmlSerializer^ xmlSerializer;
    try {
        if (System::IO::File::Exists(fileName)) {
            reader = gcnew StreamReader(fileName);
            if (fileName->Equals(CUSTOMER_XML_FILE_NAME)) {
                xmlSerializer = gcnew XmlSerializer(List<Customer^>::typeid);
                result = (List<Customer^>^)xmlSerializer->Deserialize(reader);
            }
            if (fileName->Equals(BOSS_XML_FILE_NAME)) {
                xmlSerializer = gcnew XmlSerializer(List<Boss^>::typeid);
                result = (List<Boss^>^)xmlSerializer->Deserialize(reader);
            }
            if (fileName->Equals(EMPLOYEE_XML_FILE_NAME)) {
                xmlSerializer = gcnew XmlSerializer(List<Employee^>::typeid);
                result = (List<Employee^>^)xmlSerializer->Deserialize(reader);
            }
            if (reader != nullptr) reader->Close();
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (reader != nullptr) reader->Close();
    }
    return result;
}

int AutoPrintPersistance::Persistance::AddUser(User^ user)
{
    UserListDB = (List<User^>^)Persistance::LoadXMLFile(USER_XML_FILE_NAME);

    if (UserListDB == nullptr) {
        UserListDB = gcnew List<User^>();
    }
    UserListDB->Add(user);
    //PersistTextFile(USER_FILE_NAME, CustomerListDB);
    PersistXMLFile(USER_XML_FILE_NAME, UserListDB);
    return 1;
    /*if (orderList == nullptr) {
        // Inicializar orderList si es nulo
        orderList = gcnew List<Order^>();
    }
    orderList->Add(file);
    PersistBinaryFile(Lista_Order_BIN, orderList);*/
}

int AutoPrintPersistance::Persistance::AddCostumer(Customer^ customer)
{
    /*
    customerListDB = (List<Customer^>^)Persistance::LoadXMLFile(CUSTOMER_XML_FILE_NAME);

    if (customerListDB == nullptr) {
        customerListDB = gcnew List<Customer^>();
    }
    customerListDB->Add(customer);
    //PersistTextFile(USER_FILE_NAME, CustomerListDB);
    PersistXMLFile(CUSTOMER_XML_FILE_NAME, customerListDB);
    return 1;
    */

    //int customerDNI;
    SqlConnection^ conn;
    
    try {
        //Paso 1: Se obtien la conexión a la BD
        conn = GetConnection();

        //Paso 2: Se prepara la setencia SQL
        String^ sqlStr = "dbo.usp_AddCostumer_LC";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@NAME", System::Data::SqlDbType::VarChar, 200);
        cmd->Parameters->Add("@LASTNAME", System::Data::SqlDbType::VarChar, 200);
        cmd->Parameters->Add("@PHONE_NUMBER", System::Data::SqlDbType::VarChar, 200);
        cmd->Parameters->Add("@DNI", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@GENDER", System::Data::SqlDbType::VarChar, 200);
        cmd->Parameters->Add("@PASSWORD", System::Data::SqlDbType::VarChar, 200);
        cmd->Parameters->Add("@EMAIL", System::Data::SqlDbType::VarChar, 200);
        cmd->Parameters->Add("@BIRTHDATE", System::Data::SqlDbType::VarChar, 200);
        cmd->Parameters->Add("@PHOTO", System::Data::SqlDbType::Image);
        cmd->Parameters->Add("@MONEY_IN_WALLET", System::Data::SqlDbType::Decimal);
        cmd->Parameters["@MONEY_IN_WALLET"]->Precision = 10;
        cmd->Parameters["@MONEY_IN_WALLET"]->Scale = 2;
        cmd->Prepare();

        cmd->Parameters["@NAME"]->Value = customer->Name;
        cmd->Parameters["@LASTNAME"]->Value = customer->LastName;
        cmd->Parameters["@PHONE_NUMBER"]->Value = customer->Phone_number;
        cmd->Parameters["@DNI"]->Value = customer->Dni;
        cmd->Parameters["@GENDER"]->Value = customer->Gender;
        cmd->Parameters["@PASSWORD"]->Value = customer->Password;
        cmd->Parameters["@EMAIL"]->Value = customer->Email;
        cmd->Parameters["@BIRTHDATE"]->Value = customer->Birthdate;
        cmd->Parameters["@MONEY_IN_WALLET"]->Value = customer->Money_in_wallet;
        if(customer->Photo == nullptr)
            cmd->Parameters["@PHOTO"]->Value = DBNull::Value;
        else
            cmd->Parameters["@PHOTO"]->Value = customer->Photo;

        //Paso 3: Se ejecuta la sentencia SQL
        cmd->ExecuteNonQuery();

        //Paso 4: Se procesan los resultados

    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Se cierran los objetos de conexión.
        if (conn != nullptr) conn->Close();
    }
    return 1;
}

int AutoPrintPersistance::Persistance::AddEmployee(Employee^ employee)
{
    /* employeeListDB = (List<Employee^>^)Persistance::LoadXMLFile(EMPLOYEE_XML_FILE_NAME);

   if (employeeListDB == nullptr) {
       employeeListDB = gcnew List<Employee^>();
   }
   employeeListDB->Add(employee);
   //PersistTextFile(USER_FILE_NAME, CustomerListDB);
   PersistXMLFile(EMPLOYEE_XML_FILE_NAME, employeeListDB);*/
    SqlConnection^ conn;

    try {
        //Paso 1: Se obtien la conexión a la BD
        conn = GetConnection();

        //Paso 2: Se prepara la setencia SQL
        String^ sqlStr = "dbo.usp_AddEmployee_LC";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@NAME", System::Data::SqlDbType::VarChar, 200);
        cmd->Parameters->Add("@LASTNAME", System::Data::SqlDbType::VarChar, 200);
        cmd->Parameters->Add("@PHONE_NUMBER", System::Data::SqlDbType::VarChar, 200);
        cmd->Parameters->Add("@DNI", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@GENDER", System::Data::SqlDbType::VarChar, 200);
        cmd->Parameters->Add("@PASSWORD", System::Data::SqlDbType::VarChar, 200);
        cmd->Parameters->Add("@EMAIL", System::Data::SqlDbType::VarChar, 200);
        cmd->Parameters->Add("@BIRTHDATE", System::Data::SqlDbType::VarChar, 200);
        cmd->Parameters->Add("@PHOTO", System::Data::SqlDbType::Image);
        cmd->Parameters->Add("@MONEY_IN_WALLET", System::Data::SqlDbType::Decimal);
        cmd->Parameters["@MONEY_IN_WALLET"]->Precision = 10;
        cmd->Parameters["@MONEY_IN_WALLET"]->Scale = 2;
        cmd->Prepare();

        cmd->Parameters["@NAME"]->Value = employee->Name;
        cmd->Parameters["@LASTNAME"]->Value = employee->LastName;
        cmd->Parameters["@PHONE_NUMBER"]->Value = employee->Phone_number;
        cmd->Parameters["@DNI"]->Value = employee->Dni;
        cmd->Parameters["@GENDER"]->Value = employee->Gender;
        cmd->Parameters["@PASSWORD"]->Value = employee->Password;
        cmd->Parameters["@EMAIL"]->Value = employee->Email;
        cmd->Parameters["@BIRTHDATE"]->Value = employee->Birthdate;
        cmd->Parameters["@MONEY_IN_WALLET"]->Value = employee->Money_in_wallet;
        if (employee->Photo == nullptr)
            cmd->Parameters["@PHOTO"]->Value = DBNull::Value;
        else
            cmd->Parameters["@PHOTO"]->Value = employee->Photo;

        //Paso 3: Se ejecuta la sentencia SQL
        cmd->ExecuteNonQuery();

        //Paso 4: Se procesan los resultados

    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Se cierran los objetos de conexión.
        if (conn != nullptr) conn->Close();
    }

    return 1;
}

int AutoPrintPersistance::Persistance::AddBoss(Boss^ boss)
{
    bossListDB = (List<Boss^>^)Persistance::LoadXMLFile(BOSS_XML_FILE_NAME);

    if (bossListDB == nullptr) {
        bossListDB = gcnew List<Boss^>();
    }
    bossListDB->Add(boss);
    //PersistTextFile(USER_FILE_NAME, CustomerListDB);
    PersistXMLFile(BOSS_XML_FILE_NAME, bossListDB);
    return 1;
}

void AutoPrintPersistance::Persistance::UpdateUser(User^ user)
{
    for (int i = 0; i < UserListDB->Count; i++) {
        if (UserListDB[i]->Dni == user->Dni) {
            UserListDB[i] = user;
            //PersistTextFile(USER_FILE_NAME, CustomerListDB);
            PersistXMLFile(USER_XML_FILE_NAME, UserListDB);

            return;
        }
    }
}

void AutoPrintPersistance::Persistance::UpdateCostumer(Customer^ user) {
    /*
for (int i = 0; i < customerListDB->Count; i++) {
    if (customerListDB[i]->Dni == user->Dni) {
        customerListDB[i] = user;
        //PersistTextFile(USER_FILE_NAME, CustomerListDB);
        PersistXMLFile(CUSTOMER_XML_FILE_NAME, customerListDB);

        return;
    }
}
*/
SqlConnection^ conn;
try {
    //Paso 1: Se obtien la conexión a la BD
    conn = GetConnection();

    //Paso 2: Se prepara la setencia SQL
    String^ sqlStr = "dbo.usp_UpdateCustomer1_LC";
    SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
    cmd->CommandType = System::Data::CommandType::StoredProcedure;
    cmd->Parameters->Add("@NAME", System::Data::SqlDbType::VarChar, 200);
    cmd->Parameters->Add("@LASTNAME", System::Data::SqlDbType::VarChar, 200);
    cmd->Parameters->Add("@PHONE_NUMBER", System::Data::SqlDbType::VarChar, 200);
    cmd->Parameters->Add("@DNI", System::Data::SqlDbType::Int);
    cmd->Parameters->Add("@GENDER", System::Data::SqlDbType::VarChar, 200);
    cmd->Parameters->Add("@PASSWORD", System::Data::SqlDbType::VarChar, 200);
    cmd->Parameters->Add("@EMAIL", System::Data::SqlDbType::VarChar, 200);
    cmd->Parameters->Add("@BIRTHDATE", System::Data::SqlDbType::VarChar, 200);
    cmd->Parameters->Add("@PHOTO", System::Data::SqlDbType::Image);
    cmd->Parameters->Add("@MONEY_IN_WALLET", System::Data::SqlDbType::Decimal);
    cmd->Parameters["@MONEY_IN_WALLET"]->Precision = 10;
    cmd->Parameters["@MONEY_IN_WALLET"]->Scale = 2;
    cmd->Prepare();

    cmd->Parameters["@NAME"]->Value = user->Name;
    cmd->Parameters["@LASTNAME"]->Value = user->LastName;
    cmd->Parameters["@PHONE_NUMBER"]->Value = user->Phone_number;
    cmd->Parameters["@DNI"]->Value = user->Dni;
    cmd->Parameters["@GENDER"]->Value = user->Gender;
    cmd->Parameters["@PASSWORD"]->Value = user->Password;
    cmd->Parameters["@EMAIL"]->Value = user->Email;
    cmd->Parameters["@BIRTHDATE"]->Value = user->Birthdate;
    cmd->Parameters["@MONEY_IN_WALLET"]->Value = user->Money_in_wallet;
    if (user->Photo == nullptr)
        cmd->Parameters["@PHOTO"]->Value = DBNull::Value;
    else
        cmd->Parameters["@PHOTO"]->Value = user->Photo;

    //Paso 3: Se ejecuta la sentencia SQL
    cmd->ExecuteNonQuery();

    //Paso 4: Se procesan los resultados

}
catch (Exception^ ex) {
    throw ex;
}
finally {
    //Paso 5: Se cierran los objetos de conexión.
    if (conn != nullptr) conn->Close();
}
}

void AutoPrintPersistance::Persistance::UpdateEmployee(Employee^ user)
{
    /*for (int i = 0; i < employeeListDB->Count; i++) {
        if (employeeListDB[i]->Dni == user->Dni) {
            employeeListDB[i] = user;
            //PersistTextFile(USER_FILE_NAME, CustomerListDB);
            PersistXMLFile(EMPLOYEE_XML_FILE_NAME, employeeListDB);

            return;
        }
    }*/
    SqlConnection^ conn;
    try {
        //Paso 1: Se obtien la conexión a la BD
        conn = GetConnection();

        //Paso 2: Se prepara la setencia SQL
        String^ sqlStr = "dbo.usp_UpdateEmployee_LC";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@NAME", System::Data::SqlDbType::VarChar, 200);
        cmd->Parameters->Add("@LASTNAME", System::Data::SqlDbType::VarChar, 200);
        cmd->Parameters->Add("@PHONE_NUMBER", System::Data::SqlDbType::VarChar, 200);
        cmd->Parameters->Add("@DNI", System::Data::SqlDbType::Int);
        cmd->Parameters->Add("@GENDER", System::Data::SqlDbType::VarChar, 200);
        cmd->Parameters->Add("@PASSWORD", System::Data::SqlDbType::VarChar, 200);
        cmd->Parameters->Add("@EMAIL", System::Data::SqlDbType::VarChar, 200);
        cmd->Parameters->Add("@BIRTHDATE", System::Data::SqlDbType::VarChar, 200);
        cmd->Parameters->Add("@PHOTO", System::Data::SqlDbType::Image);
        cmd->Parameters->Add("@MONEY_IN_WALLET", System::Data::SqlDbType::Decimal);
        cmd->Parameters["@MONEY_IN_WALLET"]->Precision = 10;
        cmd->Parameters["@MONEY_IN_WALLET"]->Scale = 2;
        cmd->Prepare();

        cmd->Parameters["@NAME"]->Value = user->Name;
        cmd->Parameters["@LASTNAME"]->Value = user->LastName;
        cmd->Parameters["@PHONE_NUMBER"]->Value = user->Phone_number;
        cmd->Parameters["@DNI"]->Value = user->Dni;
        cmd->Parameters["@GENDER"]->Value = user->Gender;
        cmd->Parameters["@PASSWORD"]->Value = user->Password;
        cmd->Parameters["@EMAIL"]->Value = user->Email;
        cmd->Parameters["@BIRTHDATE"]->Value = user->Birthdate;
        cmd->Parameters["@MONEY_IN_WALLET"]->Value = user->Money_in_wallet;
        if (user->Photo == nullptr)
            cmd->Parameters["@PHOTO"]->Value = DBNull::Value;
        else
            cmd->Parameters["@PHOTO"]->Value = user->Photo;

        //Paso 3: Se ejecuta la sentencia SQL
        cmd->ExecuteNonQuery();

        //Paso 4: Se procesan los resultados

    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Se cierran los objetos de conexión.
        if (conn != nullptr) conn->Close();
    }
}

void AutoPrintPersistance::Persistance::UpdateBoss(Boss^ user)
{

    for (int i = 0; i < bossListDB->Count; i++) {
        if (bossListDB[i]->Dni == user->Dni) {
            bossListDB[i] = user;
            //PersistTextFile(USER_FILE_NAME, CustomerListDB);
            PersistXMLFile(BOSS_XML_FILE_NAME, bossListDB);

            return;
        }
    }
}


void AutoPrintPersistance::Persistance::DeleteUser(int userDNI)
{
   /* for (int i = 0; i < CustomerListDB->Count; i++) {
        if (CustomerListDB[i]->Name == Nameid) {
            CustomerListDB->RemoveAt(i);
            return;
        }
    }*/
   //PersistXMLFile(USER_XML_FILE_NAME, CustomerListDB);
    UserListDB = (List<User^>^)Persistance::LoadXMLFile(USER_XML_FILE_NAME);

    // Verificar si el archivo binario contiene datos
    if (UserListDB != nullptr) {
        for (int i = UserListDB->Count - 1; i >= 0; i--) {
            if (userDNI == UserListDB[i]->Dni) {
                UserListDB->RemoveAt(i);
            }
        }
        // Guardar la lista actualizada en el archivo binario
        PersistXMLFile(USER_XML_FILE_NAME, UserListDB);
    }


}

void AutoPrintPersistance::Persistance::DeleteCustomer(int userDNI) {
    /*
if (customerListDB != nullptr) {
    for (int i = customerListDB->Count - 1; i >= 0; i--) {
        if (userDNI == customerListDB[i]->Dni) {
            customerListDB->RemoveAt(i);
        }
    }
    // Guardar la lista actualizada en el archivo binario
    PersistXMLFile(CUSTOMER_XML_FILE_NAME, customerListDB);
}
*/
SqlConnection^ conn;
try {
    //Paso 1: Se obtiene la conexión a la BD
    conn = GetConnection();

    //Paso 2: Se prepara la sentencia SQL
    String^ sqlStr = "dbo.usp_DeleteCustomer1_LC";
    SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
    cmd->CommandType = System::Data::CommandType::StoredProcedure;
    cmd->Parameters->Add("@DNI", System::Data::SqlDbType::Int);
    cmd->Prepare();
    cmd->Parameters["@DNI"]->Value = userDNI;

    //Paso 3: Se ejecuta la sentencia SQL
    cmd->ExecuteNonQuery();

    //Paso 4: Se procesan los resultados.
}
catch (Exception^ ex) {
    throw ex;
}
finally {
    //Paso 5: Se cierran los objetos de conexión.
    if (conn != nullptr) conn->Close();
}
}

void AutoPrintPersistance::Persistance::DeleteEmployee(int userDNI)
{
    /*if (employeeListDB != nullptr) {
       for (int i = employeeListDB->Count - 1; i >= 0; i--) {
           if (userDNI == employeeListDB[i]->Dni) {
               employeeListDB->RemoveAt(i);
           }
       }
       // Guardar la lista actualizada en el archivo binario
       PersistXMLFile(EMPLOYEE_XML_FILE_NAME, employeeListDB);
   }*/
    SqlConnection^ conn;
    try {
        //Paso 1: Se obtiene la conexión a la BD
        conn = GetConnection();

        //Paso 2: Se prepara la sentencia SQL
        String^ sqlStr = "dbo.usp_DeleteEmployee_LC";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@DNI", System::Data::SqlDbType::Int);
        cmd->Prepare();
        cmd->Parameters["@DNI"]->Value = userDNI;

        //Paso 3: Se ejecuta la sentencia SQL
        cmd->ExecuteNonQuery();

        //Paso 4: Se procesan los resultados.
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Se cierran los objetos de conexión.
        if (conn != nullptr) conn->Close();
    }
}

User^ AutoPrintPersistance::Persistance::QueryUserByDNI(int UserDNI)
{
   // CustomerListDB = (List<User^>^) LoadTextFile (USER_FILE_NAME);
    UserListDB = (List<User^>^) LoadXMLFile(USER_XML_FILE_NAME);

    User^ user = nullptr;
    for (int i = 0; i < UserListDB->Count; i++) {
        if (UserListDB[i]->Dni == UserDNI) {
            user = UserListDB[i];
            return user;

        }

    }
    return user;

}

Customer^ AutoPrintPersistance::Persistance::QueryCustomerByDNI(int userDNI)
{
    Customer^ customer = nullptr;
    /*
    for (int i = 0; i < customerListDB->Count; i++) {
        if (customerListDB[i]->Dni == userDNI) {
            user = customerListDB[i];
            return user;

        }

    }
    */
    SqlConnection^ conn;
    SqlDataReader^ reader;

    try {
        //Paso 1: Se obtien la conexión a la BD
        conn = GetConnection();

        //Paso 2: Se prepara la setencia SQL
        String^ sqlStr = "dbo.usp_QueryCostumerByDNI_LC";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@DNI", System::Data::SqlDbType::Int);
        cmd->Prepare();

        cmd->Parameters["@DNI"]->Value = userDNI;       

        //Paso 3: Se ejecuta la sentencia SQL
        reader = cmd->ExecuteReader();

        //Paso 4: Se procesan los resultados
        if (reader->Read()) {
            customer = gcnew Customer();
            customer->Name = reader["NAME"]->ToString();
            customer->LastName = reader["LASTNAME"]->ToString();
            customer->Phone_number = reader["PHONE_NUMBER"]->ToString();
            customer->Dni = Convert::ToInt32(reader["DNI"]->ToString());
            customer->Gender = reader["GENDER"]->ToString();
            customer->Password = reader["PASSWORD"]->ToString();
            customer->Email = reader["EMAIL"]->ToString();
            customer->Birthdate = reader["BIRTHDATE"]->ToString();
            if (!DBNull::Value->Equals(reader["MONEY_IN_WALLET"]))
                customer->Money_in_wallet = Convert::ToDouble(reader["MONEY_IN_WALLET"]->ToString());
            else
                customer->Money_in_wallet = 0;
            if (!DBNull::Value->Equals(reader["PHOTO"]))
                customer->Photo = (array<Byte>^)reader["PHOTO"];
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Se cierran los objetos de conexión.
        if (conn != nullptr) conn->Close();
    }
    return customer;
}

Employee^ AutoPrintPersistance::Persistance::QueryEmployeeByDNI(int userDNI)
{
    Employee^ employee = nullptr;
    /* for (int i = 0; i < employeeListDB->Count; i++) {
         if (employeeListDB[i]->Dni == userDNI) {
             user = employeeListDB[i];
             return user;

         }

     }*/
    SqlConnection^ conn;
    SqlDataReader^ reader;

    try {
        //Paso 1: Se obtien la conexión a la BD
        conn = GetConnection();

        //Paso 2: Se prepara la setencia SQL
        String^ sqlStr = "dbo.usp_QueryEmployeeByDNI_LC";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Parameters->Add("@DNI", System::Data::SqlDbType::Int);
        cmd->Prepare();

        cmd->Parameters["@DNI"]->Value = userDNI;

        //Paso 3: Se ejecuta la sentencia SQL
        reader = cmd->ExecuteReader();

        //Paso 4: Se procesan los resultados
        if (reader->Read()) {
            employee = gcnew Employee();
            employee->Name = reader["NAME"]->ToString();
            employee->LastName = reader["LASTNAME"]->ToString();
            employee->Phone_number = reader["PHONE_NUMBER"]->ToString();
            employee->Dni = Convert::ToInt32(reader["DNI"]->ToString());
            employee->Gender = reader["GENDER"]->ToString();
            employee->Password = reader["PASSWORD"]->ToString();
            employee->Email = reader["EMAIL"]->ToString();
            employee->Birthdate = reader["BIRTHDATE"]->ToString();
            if (!DBNull::Value->Equals(reader["MONEY_IN_WALLET"]))
                employee->Money_in_wallet = Convert::ToDouble(reader["MONEY_IN_WALLET"]->ToString());
            else
                employee->Money_in_wallet = 0;
            if (!DBNull::Value->Equals(reader["PHOTO"]))
                employee->Photo = (array<Byte>^)reader["PHOTO"];
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Se cierran los objetos de conexión.
        if (conn != nullptr) conn->Close();
    }
    return employee;

}

Boss^ AutoPrintPersistance::Persistance::QueryBossByDNI(int userDNI)
{
    Boss^ user = nullptr;
    for (int i = 0; i < bossListDB->Count; i++) {
        if (bossListDB[i]->Dni == userDNI) {
            user = bossListDB[i];
            return user;

        }

    }
    return user;
    
}


List<User^>^ AutoPrintPersistance::Persistance::QueryAllUsers()
{
    //CustomerListDB = (List<User^>^) LoadTextFile(USER_FILE_NAME );
        UserListDB = (List<User^>^) LoadXMLFile(USER_XML_FILE_NAME);

    if (UserListDB == nullptr)
        UserListDB = gcnew List<User^>();
    return UserListDB;
}
List<Customer^>^ AutoPrintPersistance::Persistance::QueryAllCustomers()
{
    /*
    customerListDB = (List<Customer^>^) LoadXMLFile(CUSTOMER_XML_FILE_NAME);

    if (customerListDB == nullptr)
        customerListDB = gcnew List<Customer^>();
    return customerListDB;
    */
    customerListDB = gcnew List<Customer^>();
    SqlConnection^ conn;
    SqlDataReader^ reader;

    try {
        //Paso 1: Se obtien la conexión a la BD
        conn = GetConnection();

        //Paso 2: Se prepara la setencia SQL
        String^ sqlStr = "dbo.usp_QueryAllCostumers_LC";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Prepare();

        //Paso 3: Se ejecuta la sentencia SQL
        reader = cmd->ExecuteReader();

        //Paso 4: Se procesan los resultados
        while (reader->Read()) {
            Customer^ customer = gcnew Customer();
            customer->Name = reader["NAME"]->ToString();
            customer->LastName = reader["LASTNAME"]->ToString();
            customer->Phone_number = reader["PHONE_NUMBER"]->ToString();
            customer->Dni = Convert::ToInt32(reader["DNI"]->ToString());
            customer->Gender = reader["GENDER"]->ToString();
            customer->Password = reader["PASSWORD"]->ToString();
            customer->Email = reader["EMAIL"]->ToString();
            customer->Birthdate = reader["BIRTHDATE"]->ToString();
            if (!DBNull::Value->Equals(reader["MONEY_IN_WALLET"]))
                customer->Money_in_wallet = Convert::ToDouble(reader["MONEY_IN_WALLET"]->ToString());
            else
                customer->Money_in_wallet = 0;
            if(!DBNull::Value->Equals(reader["PHOTO"]))
                customer->Photo = (array<Byte>^)reader["PHOTO"];
            customerListDB->Add(customer);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Se cierran los objetos de conexión.
        if (conn != nullptr) conn->Close();
    }
    return customerListDB;
}
List<Employee^>^ AutoPrintPersistance::Persistance::QueryAllEmployees()
{
    /*employeeListDB = (List<Employee^>^) LoadXMLFile(EMPLOYEE_XML_FILE_NAME);

     if (employeeListDB == nullptr)
         employeeListDB = gcnew List<Employee^>();
     return employeeListDB;*/
    employeeListDB = gcnew List<Employee^>();
    SqlConnection^ conn;
    SqlDataReader^ reader;

    try {
        //Paso 1: Se obtien la conexión a la BD
        conn = GetConnection();

        //Paso 2: Se prepara la setencia SQL
        String^ sqlStr = "dbo.usp_QueryAllEmployees_LC";
        SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
        cmd->CommandType = System::Data::CommandType::StoredProcedure;
        cmd->Prepare();

        //Paso 3: Se ejecuta la sentencia SQL
        reader = cmd->ExecuteReader();

        //Paso 4: Se procesan los resultados
        while (reader->Read()) {
            Employee^ emp = gcnew Employee();
            emp->Name = reader["NAME"]->ToString();
            emp->LastName = reader["LASTNAME"]->ToString();
            emp->Phone_number = reader["PHONE_NUMBER"]->ToString();
            emp->Dni = Convert::ToInt32(reader["DNI"]->ToString());
            emp->Gender = reader["GENDER"]->ToString();
            emp->Password = reader["PASSWORD"]->ToString();
            emp->Email = reader["EMAIL"]->ToString();
            emp->Birthdate = reader["BIRTHDATE"]->ToString();
            if (!DBNull::Value->Equals(reader["MONEY_IN_WALLET"]))
                emp->Money_in_wallet = Convert::ToDouble(reader["MONEY_IN_WALLET"]->ToString());
            else
                emp->Money_in_wallet = 0;
            if (!DBNull::Value->Equals(reader["PHOTO"]))
                emp->Photo = (array<Byte>^)reader["PHOTO"];
            employeeListDB->Add(emp);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //Paso 5: Se cierran los objetos de conexión.
        if (conn != nullptr) conn->Close();
    }
    return employeeListDB;
}
List<Boss^>^ AutoPrintPersistance::Persistance::QueryAllBoss()
{
    bossListDB = (List<Boss^>^) LoadXMLFile(BOSS_XML_FILE_NAME);

    if (bossListDB == nullptr)
        bossListDB = gcnew List<Boss^>();
    return bossListDB;
}
//intento para login
User^ AutoPrintPersistance::Persistance::Login(int dni, String^ password) {
    List<Customer^>^ cList = QueryAllCustomers();
    for (int i = 0; i < cList->Count; i++) {
        if (cList[i]->Dni==dni && cList[i]->Password->Equals(password)) {
            return cList[i];
        }
    }
    List<Employee^>^ eList = QueryAllEmployees();
    for (int i = 0; i < eList->Count; i++) {
        if (eList[i]->Dni == dni && eList[i]->Password->Equals(password)) {
            return eList[i];
        }
    }
    List<Boss^>^ bList = QueryAllBoss();
    for (int i = 0; i < bList->Count; i++) {
        if (bList[i]->Dni == dni && bList[i]->Password->Equals(password)) {
            return bList[i];
        }
    }

    return nullptr;
}

/*Francis*/

void Persistance::PersistBinaryFile(String^ fileName, Object^ persistObject) {
    FileStream^ file;
    BinaryFormatter^ formatter = gcnew BinaryFormatter();
    try {
        file = gcnew FileStream(fileName, FileMode::Create, FileAccess::Write);
        formatter->Serialize(file, persistObject);
    }
    catch (Exception^ ex) { //Si ocurre algo distinto entra aquí
        //Todo error puede se considerado como una Exception, no al revés
        throw ex;
    }
    finally { //El más importante: serán las instrucciones que se vana ejecutar si o si
        if (file != nullptr) file->Close();
    }
}

Object^ Persistance::LoadBinaryFile(String^ fileName) {
    Object^ result;
    FileStream^ file;
    BinaryFormatter^ formatter;
    //Programar la lectura de datos
    try {
        if (System::IO::File::Exists(fileName)) {
            file = gcnew FileStream(fileName, FileMode::Open, FileAccess::Read);
            formatter = gcnew BinaryFormatter();
            if (fileName->Equals(Lista_Order_BIN)) {
                result = formatter->Deserialize(file);
            }
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (file != nullptr) file->Close();
    }

    return result;
}

void Persistance::AddFile(Order^ file) {
    // Asegúrate de que orderList está inicializado
    orderList = (List<Order^>^)Persistance::LoadBinaryFile(Lista_Order_BIN);

    if (orderList == nullptr) {
        // Inicializar orderList si es nulo
        orderList = gcnew List<Order^>();
    }
    orderList->Add(file);
    PersistBinaryFile(Lista_Order_BIN, orderList);
}
List<Order^>^ Persistance::QueryAllFiles() {
    orderList = (List<Order^>^)LoadBinaryFile(Lista_Order_BIN);
    return orderList;
}

Order^ Persistance::QueryFileById(int orderId) {
    orderList = (List<Order^>^)LoadBinaryFile(Lista_Order_BIN);
    for (int i = 0; i < orderList->Count; i++) {
        if (orderList[i]->order_id == orderId)
            return orderList[i];
    }
    return nullptr;
}

Order^ Persistance::QueryFileByPosition(int numspooler) {
    orderList = (List<Order^>^)LoadBinaryFile(Lista_Order_BIN);
    if (orderList != nullptr) {
        for (int i = 0; i < orderList->Count; i++) {
            if (orderList[i]->num_spooler == numspooler)
                return orderList[i];
        }
    }
    return nullptr;
}

void Persistance::UpdateCola(Order^ order) {
    for (int i = 0; i < orderList->Count; i++) {
        if (orderList[i]->order_id == order->order_id) {
            orderList[i] = order;
            PersistBinaryFile(Lista_Order_BIN, orderList);
            return;
        }
    }
}

void Persistance::DeleteOrder(int orderId) {
    for (int i = 0; i < orderList->Count; i++) {
        if (orderList[i]->order_id == orderId) {
            orderList->RemoveAt(i);
            PersistBinaryFile(Lista_Order_BIN, orderList);
            return;
        }
    }
}

/*Cesar*/

