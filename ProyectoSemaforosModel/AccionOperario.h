#pragma once
#include "Operario.h"
#include "Sensor.h"

using namespace System;
using namespace System::Collections::Generic;

namespace ProyectoSemaforosModel {
	public ref class AccionOperario {
	private:
		int codigo;
		bool darPrioridadA;
		bool darPrioridadB;
		Operario^ objOperario;
		List<Sensor^>^ listaSensor;
	public:
		AccionOperario();
		AccionOperario(int codigo, bool darPrioridadA,
			bool darPrioridadB, Operario^ objOperario,
			List<Sensor^>^ listaSensor);

		//GET-SET

		int getCodigo();
		void setCodigo(int codigo);

		bool getDarPrioridadA();
		void setDarPrioridadA(bool darPrioridadA);

		bool getDarPrioridadB();
		void setDarPrioridadB(bool darPrioridadB);

		Operario^ getObjOperario();
		void setObjOperario(Operario^ objOperario);

		List<Sensor^>^ getListaSensor();
		void setListaSensor(List<Sensor^>^ listaSensor);



	};
}