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

/*------------------------Francis-------------------------*/

int Controller::AddOrder(Order^ file) {
    //using namespace|Clase|Metodo || Los nombres son diferentes
    //return Persistance::AddFile(file);
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
        /*Este es un código funcional que se presentó en el lab, pero lo comentaremos para hacer una pruebas con el arduino
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
        }*/
        //------------Haciendo pruebas para la entrega final---------------//
        String^ lista1 = "";
        String^ lista2 = "";

        if (listNum == 1) {
            for (int i = 1; i <= 10; i++) {
                Order^ orden_cola = QueryFileByPosition(i);
                if (orden_cola != nullptr) {
                    Customer^ cliente = QueryCustomerByDNI(orden_cola->dni_history);
                    if (cliente == nullptr) {
                        Employee^ emp_user_wallet = AutoPrintController::Controller::QueryEmployeeByDNI(orden_cola->dni_history);
                        lista1 = lista1 + emp_user_wallet->Name + " ";
                    }
                    else {
                        lista1 = lista1 + cliente->Name + " ";
                    }

                }
            }
            if (lista1 != "") {
                ArduinoPort->Write("%"+lista1);
            }
            else {
                ArduinoPort->Write("#ListaVacia ListaVacia ListaVacia");
            }
        }

        if (listNum == 2) {
            List<Order^>^ lista2_impreso = QueryAllFiles();
			   if (lista2_impreso != nullptr && lista2_impreso->Count > 0) {
				   for (int i = 0; i < lista2_impreso->Count; i++) {
					   Order^ orden_impreso = lista2_impreso[i];
					   if (orden_impreso->status_order == "Listo") {
						   Customer^ cliente_impreso = QueryCustomerByDNI(orden_impreso->dni_history);
                           if (cliente_impreso == nullptr) {
                               Employee^ emp_user_wallet = AutoPrintController::Controller::QueryEmployeeByDNI(orden_impreso->dni_history);
                               lista2 = lista2 + emp_user_wallet->Name + " ";
                           }
                           else {
                               lista2 = lista2 + cliente_impreso->Name + " ";
                           }
					   }
				   }
			   }
               if (lista2 != "") {
                   ArduinoPort->Write("#" + lista2);
               }
               else {
                   ArduinoPort->Write("#ListaVacia ListaVacia ListaVacia");
               }
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
        ArduinoPort->PortName = "COM3";
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


