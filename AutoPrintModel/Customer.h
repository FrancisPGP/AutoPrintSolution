/**
 * Project Untitled
 */
#pragma once

#ifndef _CUSTOMER_H
#define _CUSTOMER_H

#include "User.h"

using namespace System;
using namespace System::Collections::Generic;
//"using namespace System::Collections::Generic;" || Lo usamos para que "List<String^>^ record;" pueda existir

namespace AutoPrintModel {
    public ref class Customer : public User {
    public:
        property List<String^>^ record;

     
        void BuyPrint();

        void Reload();
       Customer(){}
        Customer(String^ Name, String^ LastName, String^ Phonenumber, int Dni, String^ Gender, String^ Password, String^ Email, String^ Birthdate, array<Byte>^ Photo, double Moneyinwa) :
            User(Name,LastName,Phonenumber,Dni,Gender,Password,Email,Birthdate,Photo,Moneyinwa) {

          
        }
    };
}
#endif //_CUSTOMER_H