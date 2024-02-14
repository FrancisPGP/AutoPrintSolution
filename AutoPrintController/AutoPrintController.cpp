#include "pch.h"

#include "AutoPrintController.h"

using namespace AutoPrintPersistance;
using namespace AutoPrintController;

/*Ricardo y Luis*/

int AutoPrintController::Controller::AddUser(User^ user) {
    return ::Persistance::AddUser(user);

}

int AutoPrintController::Controller::AddCostumer(Customer^ customer)
{
    return ::Persistance::AddCostumer(customer);
}

int AutoPrintController::Controller::AddEmployee(Employee^ employee)
{
    return ::Persistance::AddEmployee(employee);
}

int AutoPrintController::Controller::AddBoss(Boss^ boss)
{
    return ::Persistance::AddBoss(boss);
}

void AutoPrintController::Controller::UpdateUser(User^ user) {
    return ::Persistance::UpdateUser(user);
}

void AutoPrintController::Controller::UpdateCostumer(Customer^ user)
{
    return ::Persistance::UpdateCostumer(user);
}

void AutoPrintController::Controller::UpdateEmployee(Employee^ user)
{
    return ::Persistance::UpdateEmployee(user);
}

void AutoPrintController::Controller::UpdateBoss(Boss^ user)
{
    throw gcnew System::NotImplementedException();
}

void AutoPrintController::Controller::DeleteUser(int userDNI) {
    return ::Persistance::DeleteUser(userDNI);

}

void AutoPrintController::Controller::DeleteCustomer(int userDNI)
{
    return ::Persistance::DeleteCustomer(userDNI);
}

User^ AutoPrintController::Controller::QueryUserByDNI(int UserDNI) {
    return Persistance::QueryUserByDNI(UserDNI);

}

Customer^ AutoPrintController::Controller::QueryCustomerByDNI(int userDNI)
{
    return Persistance::QueryCustomerByDNI(userDNI);
    // TODO: Insertar una instrucci�n "return" aqu�
}

Employee^ AutoPrintController::Controller::QueryEmployeeByDNI(int userDNI)
{
    return Persistance::QueryEmployeeByDNI(userDNI);
    // TODO: Insertar una instrucci�n "return" aqu�
}

Boss^ AutoPrintController::Controller::QueryBossByDNI(int userDNI)
{
    return Persistance::QueryBossByDNI(userDNI);
    // TODO: Insertar una instrucci�n "return" aqu�
}

List<User^>^ AutoPrintController::Controller::QueryAllUsers() {
    return Persistance::QueryAllUsers();
}

List<Customer^>^ AutoPrintController::Controller::QueryAllCustomers()
{
    return Persistance::QueryAllCustomers();
    // TODO: Insertar una instrucci�n "return" aqu�
}

List<Employee^>^ AutoPrintController::Controller::QueryAllEmployees()
{
    return Persistance::QueryAllEmployees();
    // TODO: Insertar una instrucci�n "return" aqu�
}

List<Boss^>^ AutoPrintController::Controller::QueryAllBoss()
{
    return Persistance::QueryAllBoss();
    // TODO: Insertar una instrucci�n "return" aqu�
}

//intento para login
User^ AutoPrintController::Controller::Login(int dni, String^ password) {
    return Persistance::Login(dni,password);
}

/*Francis*/
void Controller::AddOrder(Order^ file) {
    //using namespace|Clase|Metodo || Los nombres son diferentes
     Persistance::AddFile(file);
}

List<Order^>^ Controller::QueryAllFiles() {
    return Persistance::QueryAllFiles();
}

Order^ Controller::QueryFileById(int orderId) {
    return Persistance::QueryFileById(orderId);
}

/*Cesar*/
