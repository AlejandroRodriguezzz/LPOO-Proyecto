#pragma once
#include "Empleado.h"

using namespace System;

namespace ProyectoSemaforosModel {
	public ref class Supervisor : Empleado {
	private:
		int codigo;
	public:
		Supervisor();
		Supervisor(int codigo);

		int getCodigo();
		void setCodigo(int codigo);
	};
}
