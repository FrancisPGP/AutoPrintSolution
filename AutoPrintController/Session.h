#pragma once
using namespace System;
using namespace AutoPrintModel;

namespace AutoPrintModel {
    public ref class Session
    {
    public:
        static property User^ CurrentUser {
            User^ get() {
                return currentUser;
            }
            void set(User^ user) {
                currentUser = user;
            }
        }
   
    private:
        static User^ currentUser;
      
    };
}