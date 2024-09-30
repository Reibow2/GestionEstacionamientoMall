/**
 * Project Untitled
 */

//JOAQUIN IDIOTA

#pragma once

#include "Usuario.h"

using namespace System;

namespace Model {
    public ref class Cliente : public Usuario {
    public:
        int PuntosCliene;
        int Descuento;
        bool LugarReservado;
        String^ Profession;
    };
}
