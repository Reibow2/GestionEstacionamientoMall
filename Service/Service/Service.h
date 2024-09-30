#pragma once

#include "../../Model/Estacionamiento.h"

using namespace System;
using namespace Model;
using namespace System::Collections::Generic;

namespace EstacionamientoService {
	public ref class Service {
	private:
		static List<Estacionamiento^>^ ListaEstacionamiento = gcnew List<Estacionamiento^>();
	public:
		//Operaciones CRUD (Create, Request, Update, Delete) se utilizan para los mantenimientos de las entidades del sistema
		static void AddEstacionamiento(Estacionamiento^);
		static void UpdateEstacionamiento(Estacionamiento^);
		static void DeleteEstacionamiento(int estacionamientoId);
		static List<Estacionamiento^>^ QueryAllEstacionamiento();
		static Estacionamiento^ QueryEstacionamientoById(int estacionamientoId);
	};
}