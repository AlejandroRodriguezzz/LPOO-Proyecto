#pragma once
#include "Empleado.h"
#include "ReporteRH.h"

using namespace System;
using namespace System::Collections::Generic;

namespace ProyectoSemaforosModel {
	public ref class RecursosHumanos : Empleado {
	private:
		List<ReporteRH^>^ listaReporteRH;
	public:
		RecursosHumanos();
		RecursosHumanos(int codigo, List<ReporteRH^>^ listaReporteRH, 
			String^ usuario, String^ contrasena,
			String^ nombre, String^ area, String^ telefono,
			String^ direccion, String^ fechaCumpleanhos);

		//GET-SET


		List<ReporteRH^>^ getListaReporteRH();
		void setListaReporteRH(List<ReporteRH^>^ listaReporteRH);

	};
}