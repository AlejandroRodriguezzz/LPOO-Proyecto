#pragma once
#include "Vehiculo.h"
using namespace System;
using namespace System::Collections::Generic;

namespace ProyectoSemaforosModel {
	public ref class Sensor {
	private:
		int codigo;
		double distanciaVehiculo;
		bool detectaVehiculo;
		List<Vehiculo^>^ listaVehiculo;
	public:
		Sensor();
		Sensor(int codigo, double distanciaVehiculo,
			   bool detectaVehiculo, List<Vehiculo^>^ listaVehiculo);

		int getCodigo();
		void setCodigo(int codigo);

		double getDistanciaVehiculo();
		void setDistanciaVehiculo(double distanciaVehiculo);

		bool getDetectaVehiculo();
		void setDetectaVehiculo(bool detectaVehiculo);

		List<Vehiculo^>^ getListaVehiculo();
		void setListaVehiculo(List<Vehiculo^>^ listaVehiculo);
	};
}
