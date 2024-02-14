#pragma once

using namespace System;
using namespace AutoPrintModel;
using namespace System::Collections::Generic;
using namespace System::IO::Ports;

namespace AutoPrintController {
    public ref class Controller
    {
      
    public:
        /*Ricardo y Luis*/
        static int AddUser(User^ user); //"static" sirve para crear este método global () CREO QUE YA NO SE UTILIZARA
        static int AddCostumer(Customer^ customer);
        static int AddEmployee(Employee^ employee);
        static int AddBoss(Boss^ boss);


        static void UpdateUser(User^ user);
        static void UpdateCostumer(Customer^ user);
        static void UpdateEmployee(Employee^ user);
        static void UpdateBoss(Boss^ user);

        static void DeleteUser(int userDNI);
        static void DeleteCustomer(int userDNI);

        static User^ QueryUserByDNI(int UserDNI); // Buscar el id del custome
        static Customer^ QueryCustomerByDNI(int userDNI); // Buscar el id del custome
        static Employee^ QueryEmployeeByDNI(int userDNI); // Buscar el id del custome
        static Boss^ QueryBossByDNI(int userDNI); // Buscar el id del custome

        static List<User^>^ QueryAllUsers();//Tener la lista de usuarios
        static List<Customer^>^ QueryAllCustomers();//Tener la lista de usuarios
        static List<Employee^>^ QueryAllEmployees();//Tener la lista de usuarios
        static List<Boss^>^ QueryAllBoss();//Tener la lista de usuarios

        //intento para login
        static User^ Login(int dni, String^ password);

        /*Francis*/
        static void AddOrder(Order^);
        static List<Order^>^ QueryAllFiles();
        static Order^ QueryFileById(int orderId);

        
        /*Cesar*/

    };
}
