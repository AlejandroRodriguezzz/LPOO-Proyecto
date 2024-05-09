#pragma once
#include "Semaforo.h"

using namespace System;

namespace ProyectoSemaforosModel {
	public ref class Display {
	private:
		int codigo;
		String^ mostrarEstado;
		Semaforo^ objSemaforo;
	public:
		Display();
		Display(int codigo, String^ mostrarEstado,
			Semaforo^ objSemaforo);
		//GET-SET

		int getCodigo();
		void setCodigo(int codigo);

		String^ getMostrarEstado();
		void setMostrarEstado(String^ mostrarEstado);

		Semaforo^ getObjSemaforo();
		void setObjSemaforo(Semaforo^ objSemaforo);

	};
}