#pragma once
#include "Sensor.h"

using namespace System;
using namespace System::Collections::Generic;

namespace ProyectoSemaforosModel {
	public ref class Transito {
	private:
		int codigo;
		String^ estadoTransito;
		List<Sensor^>^ listaSensor;
	public:
		Transito();
		Transito(int codigo, String^ estadoTransito,
			   	 List<Sensor^>^ listaSensor);

		int getCodigo();
		void setCodigo(int codigo);

		String^ getEstadoTransito();
		void setEstadoTransito(String^ estadoTransito);

		List<Sensor^>^ getListaSensor();
		void setListaSensor(List<Sensor^>^ listaSensor);
	};
}