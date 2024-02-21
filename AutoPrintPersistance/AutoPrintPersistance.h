#pragma once

using namespace System;
using namespace AutoPrintModel;
using namespace System::Collections::Generic;
using namespace System::Data::SqlClient;

namespace AutoPrintPersistance {
	public ref class Persistance
	{
	private:
		/*Luis y ricardo*/
		static List<User^>^ UserListDB = gcnew List<User^>();// base de datos
		static List<Customer^>^ customerListDB = gcnew List<Customer^>();
		static List<Employee^>^ employeeListDB = gcnew List<Employee^>();
		static List<Boss^>^ bossListDB = gcnew List<Boss^>();


		/*Francis*/
		static List<Order^>^ orderList = gcnew List<Order^>();


		/*Cesar*/

	public:
		static int costumerid=1;

		//Luis y ricardo
		static String^ USER_FILE_NAME = "Users.txt";
		static String^ USER_XML_FILE_NAME = "Users.xml";
		static String^ EMPLOYEE_XML_FILE_NAME = "Employees.xml";
		static String^ BOSS_XML_FILE_NAME = "Boss.xml";
		static String^ CUSTOMER_XML_FILE_NAME = "Customers.xml";

		//Luis y Ricardo
		//Método que retorna un objeto conexión a la BD
		static SqlConnection^ GetConnection();

		//Francis
		static String^ Lista_Order_BIN = "Orders.bin";


		//Cesar



		/*Luis y ricardo*/
		static void PersistTextFile(String^ fileName, Object^ persistObject);

		static Object^ LoadTextFile(String^ fileName);

		static void PersistXMLFile(String^ fileName, Object^ persistObject);
		static Object^ LoadXMLFile(String^ fileName);

		/*Francis*/
		static void PersistBinaryFile(String^ fileName, Object^ persistObject);
		static Object^ LoadBinaryFile(String^ fileName);


		/*Luis y ricardo*/
		//Copy paste del controller xd
		static int AddUser(User^ user); //"static" sirve para crear este método global () CREO QUE YA NO SE USARA
		static int AddCostumer(Customer^ customer);
		static int AddEmployee(Employee^ employee);
		static int AddBoss(Boss^ boss);

		static void UpdateUser(User^ user); //CREO QUE YA NO SE USARA
		static void UpdateCostumer(Customer^ user);
		static void UpdateEmployee(Employee^ user);
		static void UpdateBoss(Boss^ user);

		static void DeleteUser(int userDNI);
		static void DeleteCustomer(int userDNI);
		static void DeleteEmployee(int userDNI);




		static User^ QueryUserByDNI(int userDNI); // Buscar el id del custome CREO QUE YA NO SE UTILIZARA
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
		// Files
		static void AddFile(Order^ file);
		static List<Order^>^ QueryAllFiles();
		static Order^ QueryFileById(int orderId);
		static Order^ QueryFileByPosition(int numspooler);
		static void UpdateCola(Order^ order);
		static void DeleteOrder(int orderId);

		/*Cesar*/


	};
}
