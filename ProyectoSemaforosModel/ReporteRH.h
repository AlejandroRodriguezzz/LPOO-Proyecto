#pragma once

using namespace System;

namespace ProyectoSemaforosModel {
	public ref class ReporteRH {
	private:
		int codigo;
		String^ reporteRH;
	public:
		ReporteRH();
		ReporteRH(int codigo, String^ reporteRH);

		int getCodigo();
		void setCodigo(int codigo);

		String^ getReporteRH();
		void setReporteRH(String^ reporteRH);
	};
}