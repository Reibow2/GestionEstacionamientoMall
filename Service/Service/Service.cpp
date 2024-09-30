#include "pch.h"
#include "Service.h"

//PLAZAS ESTACIONAMIENTO
void EstacionamientoService::Service::AddEstacionamiento(Estacionamiento^ estacionamiento)
{
	ListaEstacionamiento->Add(estacionamiento);
}

void EstacionamientoService::Service::UpdateEstacionamiento(Estacionamiento^ estacionamiento)
{
	for (int i = 0; i < ListaEstacionamiento->Count; i++) {
		if (ListaEstacionamiento[i]->Id == estacionamiento->Id) {
			ListaEstacionamiento[i] = estacionamiento;
			return;
		}
	}
}

void EstacionamientoService::Service::DeleteEstacionamiento(int estacionamientoId)
{
	for (int i = 0; i < ListaEstacionamiento->Count; i++) {
		if (ListaEstacionamiento[i]->Id == estacionamientoId) {
			ListaEstacionamiento->RemoveAt(i);
			return;
		}
	}
}

List<Estacionamiento^>^ EstacionamientoService::Service::QueryAllEstacionamiento()
{
	return ListaEstacionamiento;
}

Estacionamiento^ EstacionamientoService::Service::QueryEstacionamientoById(int estacionamientoId)
{
	for (int i = 0; i < ListaEstacionamiento->Count; i++) {
		if (ListaEstacionamiento[i]->Id == estacionamientoId) {
			return ListaEstacionamiento[i];
		}
	}
}
//USUARIOS
void EstacionamientoService::Service::AddUsuario(Usuario^ Usuario)
{
	ListaUsuario->Add(Usuario);
}

void EstacionamientoService::Service::UpdateUsuario(Usuario^ Usuario)
{
	for (int i = 0; i < ListaUsuario->Count; i++) {
		if (ListaUsuario[i]->Id == Usuario->Id) {
			ListaUsuario[i] = Usuario;
			return;
		}
	}
}

void EstacionamientoService::Service::DeleteUsuario(int UsuarioID)
{
	for (int i = 0; i < ListaUsuario->Count; i++) {
		if (ListaUsuario[i]->Id == UsuarioID) {
			ListaUsuario->RemoveAt(i);
			return;
		}
	}
}

List<Usuario^>^ EstacionamientoService::Service::QueryAllUsuario()
{
	return ListaUsuario;
}

Usuario^ EstacionamientoService::Service::QueryUsuarioById(int UsuarioID)
{
	for (int i = 0; i < ListaUsuario->Count; i++) {
		if (ListaUsuario[i]->Id == UsuarioID) {
			return ListaUsuario[i];
		}
	}
}
