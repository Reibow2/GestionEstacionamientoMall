#pragma once

using namespace System;
using namespace Model;
using namespace System::Collections::Generic;

namespace EstacionamientoService {
	public ref class Service {
	private:
		static List<Estacionamiento^>^ ListaEstacionamiento = gcnew List<Estacionamiento^>();
		};
}