/**
 * Project Untitled
 */


#pragma once
using namespace System;
namespace Model {
    public ref class Ticket {
    public:
        int Id;
        double CantTotal;
        String^ TipoPago;
        DateTime Dia;
    };
}