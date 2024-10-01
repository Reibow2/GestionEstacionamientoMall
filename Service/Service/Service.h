#pragma once
#include "../../Model/Estacionamiento.h"
#include "../../Model/PersonalLimpieza.h"


using namespace System;
using namespace Model;
using namespace System::Collections::Generic;


namespace EstacionamientoService {
	public ref class Service {
	private:
		static List<Estacionamiento^>^ ListaEstacionamiento = gcnew List<Estacionamiento^>();
		static List<Usuario^>^ ListaUsuario = gcnew List<Usuario^>();
		static List<PersonalLimpieza^>^ ListaPersonalLimpieza = gcnew List<PersonalLimpieza^>();

	public:
		//Operaciones CRUD (Create, Request, Update, Delete) se utilizan para los mantenimientos de las entidades del sistema
		static void AddEstacionamiento(Estacionamiento^);
		static void UpdateEstacionamiento(Estacionamiento^);
		static void DeleteEstacionamiento(int estacionamientoId);
		static List<Estacionamiento^>^ QueryAllEstacionamiento();
		static Estacionamiento^ QueryEstacionamientoById(int estacionamientoId);
		//Operaciones CRUD (Clientes)
		static void AddUsuario(Usuario^);
		static void UpdateUsuario(Usuario^);
		static void DeleteUsuario(int UsuarioID);
		static List<Usuario^>^ QueryAllUsuario();
		static Usuario^ QueryUsuarioById(int UsuarioID);

		//Operaciones CRUD (Personal Limpieza)
		static void AddPersonalLimpieza(PersonalLimpieza^);
		static void UpdatePersonalLimpieza(PersonalLimpieza^);
		static void DeletePersonalLimpieza(int PersonalLimpiezaID);
		static List<PersonalLimpieza^>^ QueryAllPersonalLimpieza();
		static PersonalLimpieza^ QueryPersonalLimpiezaById(int PersonalLimpiezaId);

	};
}