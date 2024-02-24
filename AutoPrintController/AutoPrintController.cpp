#include "pch.h"

#include "AutoPrintController.h"

using namespace AutoPrintPersistance;
using namespace AutoPrintController;

/*Ricardo y Luis*/

int AutoPrintController::Controller::AddUser(User^ user) {
    return ::Persistance::AddUser(user);
}

int AutoPrintController::Controller::AddCostumer(Customer^ customer) {
    int res;
    try {
        res = Persistance::AddCostumer(customer);
    }
    catch (Exception^ ex) {
        throw ex;
    }
    return res;
}

int AutoPrintController::Controller::AddEmployee(Employee^ employee) {
    return ::Persistance::AddEmployee(employee);
}

int AutoPrintController::Controller::AddBoss(Boss^ boss) {
    return ::Persistance::AddBoss(boss);
}

void AutoPrintController::Controller::UpdateUser(User^ user) {
    return ::Persistance::UpdateUser(user);
}

void AutoPrintController::Controller::UpdateCostumer(Customer^ user) {
    return ::Persistance::UpdateCostumer(user);
}

void AutoPrintController::Controller::UpdateEmployee(Employee^ user) {
    return ::Persistance::UpdateEmployee(user);
}

void AutoPrintController::Controller::UpdateBoss(Boss^ user) {
    return ::Persistance::UpdateBoss(user);
}

void AutoPrintController::Controller::DeleteUser(int userDNI) {
    return ::Persistance::DeleteUser(userDNI);
}

void AutoPrintController::Controller::DeleteCustomer(int userDNI) {
    return ::Persistance::DeleteCustomer(userDNI);
}

void AutoPrintController::Controller::DeleteEmployee(int userDNI)
{
    return ::Persistance::DeleteEmployee(userDNI);
}

User^ AutoPrintController::Controller::QueryUserByDNI(int UserDNI) {
    return Persistance::QueryUserByDNI(UserDNI);
}

Customer^ AutoPrintController::Controller::QueryCustomerByDNI(int userDNI) {
    return Persistance::QueryCustomerByDNI(userDNI);
    // TODO: Insertar una instrucción "return" aquí
}

Employee^ AutoPrintController::Controller::QueryEmployeeByDNI(int userDNI) {
    return Persistance::QueryEmployeeByDNI(userDNI);
    // TODO: Insertar una instrucción "return" aquí
}

Boss^ AutoPrintController::Controller::QueryBossByDNI(int userDNI) {
    return Persistance::QueryBossByDNI(userDNI);
    // TODO: Insertar una instrucción "return" aquí
}

List<User^>^ AutoPrintController::Controller::QueryAllUsers() {
    return Persistance::QueryAllUsers();
}

List<Customer^>^ AutoPrintController::Controller::QueryAllCustomers() {
    return Persistance::QueryAllCustomers();
    // TODO: Insertar una instrucción "return" aquí
}

List<Employee^>^ AutoPrintController::Controller::QueryAllEmployees()
{
    return Persistance::QueryAllEmployees();
    // TODO: Insertar una instrucción "return" aquí
}

List<Boss^>^ AutoPrintController::Controller::QueryAllBoss() {
    return Persistance::QueryAllBoss();
    // TODO: Insertar una instrucción "return" aquí
}

//intento para login
User^ AutoPrintController::Controller::Login(int dni, String^ password) {
    return Persistance::Login(dni, password);
}

/*Francis*/
int Controller::AddOrder(Order^ file) {
    //using namespace|Clase|Metodo || Los nombres son diferentes
    int res;
    try {
        res = Persistance::AddFile(file);
    }
    catch (Exception^ ex) {
        throw ex;
    }
    return res;
}

List<Order^>^ Controller::QueryAllFiles() {
    return Persistance::QueryAllFiles();
}

Order^ Controller::QueryFileById(int orderId) {
    return Persistance::QueryFileById(orderId);
}

Order^ Controller::QueryFileByPosition(int numspooler) {
    return Persistance::QueryFileByPosition(numspooler);
}

void Controller::UpdateCola(Order^ order) {
    Persistance::UpdateCola(order);
}

void Controller::DeleteOrder(int orderId) {
    Persistance::DeleteOrder(orderId);
}

//-----------------Cesar---------------//Arduino

void AutoPrintController::Controller::ShowList(int listNum)
{
    try {
        OpenPort();
        //ArduinoPort->Write(Convert::ToString(listNum));
        /*
        if (listNum == 1) {
            String^ prueba1 = "Ricardo Luis Francis Faridh Cesar";
            ArduinoPort->Write(prueba1);
        }
        if (listNum == 2) {
            String^ prueba2 = "Duke Cesar Lisa Lola";
            ArduinoPort->Write(prueba2);
        }
        */
        String^ ListNames = "";
        for (int i = 1; i <= 10; i++) {
            Order^ orden_cola = QueryFileByPosition(i);
            if (orden_cola != nullptr) {
                Customer^ cliente = QueryCustomerByDNI(orden_cola->dni_history);
                if (cliente == nullptr) {
                    Employee^ emp_user_wallet = AutoPrintController::Controller::QueryEmployeeByDNI(orden_cola->dni_history);
                    ListNames = ListNames + " " + emp_user_wallet->Name;
                }
                else {
                    ListNames = ListNames + " " + cliente->Name;
                    //Cesar Faridh Francis
                }

            }
        }
        if (ListNames != "") {
            ArduinoPort->Write(ListNames);
        }
        else {
            ArduinoPort->Write("ListaVacia");
        }
        ClosePort();
    }
    catch (Exception^ ex) {
        throw ex;
    }
}

void AutoPrintController::Controller::OpenPort() {
    try {
        ArduinoPort = gcnew SerialPort();
        ArduinoPort->PortName = "COM6";
        ArduinoPort->BaudRate = 9600;
        ArduinoPort->Open();
    }
    catch (Exception^ ex) {
        throw ex;
    }
}

void AutoPrintController::Controller::ClosePort()
{
    try {
        if (ArduinoPort->IsOpen) ArduinoPort->Close();
    }
    catch (Exception^ ex) {
        throw ex;
    }
}


