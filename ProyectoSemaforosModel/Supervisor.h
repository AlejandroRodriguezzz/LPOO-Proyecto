#pragma once
#include "Empleado.h"

using namespace System;

namespace ProyectoSemaforosModel {
	public ref class Supervisor : Empleado {
	private:
	public:
		Supervisor();
		Supervisor(int codigo, String^ usuario, String^ contrasena,
			String^ nombre, String^ area, String^ telefono,
			String^ direccion, String^ fechaCumpleanhos);

	};
}
