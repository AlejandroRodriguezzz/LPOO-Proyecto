#pragma once
#include "Empleado.h"
#include "ReporteRH.h"

using namespace System;
using namespace System::Collections::Generic;

namespace ProyectoSemaforosModel {
	public ref class RecursosHumanos : Empleado {
	private:
		int codigo;
		List<ReporteRH^>^ listaReporteRH;
	public:
		RecursosHumanos();
		RecursosHumanos(int codigo, List<ReporteRH^>^ listaReporteRH);

		//GET-SET

		int getCodigo();
		void setCodigo(int codigo);

		List<ReporteRH^>^ getListaReporteRH();
		void setListaReporteRH(List<ReporteRH^>^ listaReporteRH);

	};
}