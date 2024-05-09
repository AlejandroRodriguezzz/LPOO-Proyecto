#pragma once
#include "ServicioEmergencia.h"
using namespace System;

namespace ProyectoSemaforosModel {
	public ref class Vehiculo {
	private:
		int codigo;
		int tiempoEspera;
		ServicioEmergencia^ objServicioEmergencia;
	public:
		Vehiculo();
		Vehiculo(int codigo, int tiempoEspera,
				 ServicioEmergencia^ objServicioEmergencia);

		int getCodigo();
		void setCodigo(int codigo);

		int getTiempoEspera();
		void setTiempoEspera(int tiempoEspera);

		ServicioEmergencia^ getServicioEmergencia();
		void setServicioEmergencia(ServicioEmergencia^ objServicioEmergencia);
	};
}
//Aloha