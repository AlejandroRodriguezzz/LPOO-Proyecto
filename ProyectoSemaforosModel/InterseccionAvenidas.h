#pragma once
#include "Transito.h"
#include "Semaforo.h"

using namespace System;
using namespace System::Collections::Generic;

namespace ProyectoSemaforosModel {
	public ref class InterseccionAvenidas {
	private:
		int codigo;
		String^ nombresAvenidas;
		int cantidadAvenidas;
		int cantidadSemaforos;
		List<Transito^>^ listaTransito;
		List<Semaforo^>^ listaSemaforo;
	public:
		InterseccionAvenidas();
		InterseccionAvenidas(int codigo, String^ nombresAvenidas,
			int cantidadAvenidas, int cantidadSemaforos,
			List<Transito^>^ listaTransito,
			List<Semaforo^>^ listaSemaforo);

		//GET-SET

		int getCodigo();
		void setCodigo(int codigo);

		String^ getNombresAvenidas();
		void setNombresAvenidas(String^ nombresAvenidas);

		int getCantidadAvenidas();
		void setCantidadAvenidas(int cantidadAvenidas);

		int getCantidadSemaforos();
		void setCantidadSemaforos(int cantidadSemaforos);

		List<Transito^>^ getListaTransito();
		void setListaTransito(List<Transito^>^ listaTransito);

		List<Semaforo^>^ getListaSemaforo();
		void setListaSemaforo(List<Semaforo^>^ listaSemaforo);

	};
}