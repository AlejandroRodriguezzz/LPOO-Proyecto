#pragma once

using namespace System;

namespace ProyectoSemaforosModel {
	public ref class DetalleEmergencia {
	private:
		int codigo;
		String^ tipoEmergencia;
		String^ ubicacion;
		String^ horaRegistrada;
	public:
		DetalleEmergencia();
		DetalleEmergencia(int codigo, String^ tipoEmergencia, String^ ubicacion, String^ horaRegistrada);
	
		//GET-SET

		int getCodigo();
		void setCodigo(int codigo);

		String^ getTipoEmergencia();
		void setTipoEmergencia(String^ tipoEmergencia);

		String^ getUbicacion();
		void setUbicacion(String^ ubicacion);

		String^ getHoraRegistrada();
		void setHoraRegistrada(String^ horaRegistrada);




	};
}