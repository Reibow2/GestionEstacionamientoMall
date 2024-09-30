#include "pch.h"
#include "Service.h"


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
