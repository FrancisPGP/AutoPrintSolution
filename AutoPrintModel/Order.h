/**
 * Project Untitled
 */
#pragma once

#ifndef _ORDER_H
#define _ORDER_H

using namespace System;
using namespace System::Collections::Generic;

namespace AutoPrintModel {
    [Serializable]
    public ref class Order {
    public:
        property int order_id;
        property String^ color_page;
        property int num_spooler;// numero de posición en cola
        property int num_copies;
        property String^ sheet_type;
        property String^ sheet_size;
        property String^ status_order;//no se usó
        property  double price; // precio, pe
        property String^ date;

        property String^ Location;
        property String^ PDF_URL;
        property array<Byte>^ PDF;
        property int time_print;

        Order (){}
        Order(int id, String^ color, String^ sheet_type, String^ sheet_size, int num_copies, String^ location, double price, String^ date, int num_spooler, String^ Location, String^ PDF_URL, array<Byte>^ PDF, int time_print) {
            this->order_id = id;
            this->color_page = color;
            this->sheet_type = sheet_type;
            this->sheet_size = sheet_size;
            this->num_copies = num_copies;
            this->Location = location;
            this->price = price;
            this->date = date;
            this->num_spooler = num_spooler;
            this->Location = Location;
            this->PDF_URL = PDF_URL;
            this->PDF = PDF;
            this->time_print = time_print;
        }
        
        void PrintDocument();

        void CheckState();
    };
}
#endif //_ORDER_H