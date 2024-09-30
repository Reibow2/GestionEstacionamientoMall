/**
 * Project Untitled
 */


#pragma once

#include "Sensor.h"
using namespace System;

namespace Model {
    public ref class Estacionamiento : public Sensor {
    public:
        String^ HoraInicio;
        String^ HoraSalida;
        int Id;
    };
}
