/**
 * Project Untitled
 */
#pragma once

#ifndef _BOSS_H
#define _BOSS_H

#include "User.h"

using namespace System;

namespace AutoPrintModel {
    public ref class Boss : public User {
        public:Boss(){}
            Boss(String^ Name, String^ LastName, String^ Phonenumber, int Dni, String^ Gender, String^ Password, String^ Email, String^ Birthdate, array<Byte>^ Photo, double Money_in_wallet) :
                User(Name, LastName, Phonenumber, Dni, Gender, Password, Email, Birthdate, Photo,Money_in_wallet) {


            }

            void ViewProfits();
    };
}
#endif //_BOSS_H