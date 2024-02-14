/**
 * Project Untitled
 */
#pragma once

#ifndef _EMPLOYEE_H
#define _EMPLOYEE_H

#include "User.h"

using namespace System;

namespace AutoPrintModel {
    public ref class Employee : public User {
    public:
        Employee() {}
        Employee(String^ Name, String^ LastName, String^ Phonenumber, int Dni, String^ Gender, String^ Password, String^ Email, String^ Birthdate, array<Byte>^ Photo, double Moneyinwa) :
            User(Name, LastName, Phonenumber, Dni, Gender, Password, Email, Birthdate, Photo,Moneyinwa) {


        }
        void SendNotific();
    };
}
#endif //_EMPLOYEE_H