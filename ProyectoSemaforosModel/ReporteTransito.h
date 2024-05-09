#pragma once
#include "Operario.h"
using namespace System;

namespace ProyectoSemaforosModel {
	public ref class ReporteTransito {
	private:
		int codigo;
		String^ reporteDelDia;
		Operario^ objOperario;
	public:
		ReporteTransito();
		ReporteTransito(int codigo, String^ reporteDelDia,
			            Operario^ objOperario);

		int getCodigo();
		void setCodigo(int codigo);

		String^ getReporteDelDia();
		void setReporteDelDia(String^ reporteDelDia);

		Operario^ getObjOperario();
		void setObjOperario(Operario^ objOperario);
	};

}
