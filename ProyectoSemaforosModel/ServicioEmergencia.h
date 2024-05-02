#pragma once
#include "Operario.h"
#include "DetalleEmergencia.h"

using namespace System;
using namespace System::Collections::Generic;

namespace ProyectoSemaforosModel {
	public ref class ServicioEmergencia {
	private:
		int codigo;
		String^ contacto;
		Operario^ objOperario;
		List<DetalleEmergencia^>^ listaDetalleEmergencia;
	public:
		ServicioEmergencia();
		ServicioEmergencia(int codigo, String^ contacto,
						   Operario^ objOperario,
						   List<DetalleEmergencia^>^ listaDetalleEmergencia);
		int getCodigo();
		void setCodigo(int codigo);

		String^ getContacto();
		void setContacto(String^ contacto);

		Operario^ getObjOperario();
		void setObjOperario(Operario^ objOperario);

		List<DetalleEmergencia^>^ getListaDetalleEmergencia();
		void setListaDetalleEmergencia(List<DetalleEmergencia^>^ listaDetalleEmergencia);
	};
}
