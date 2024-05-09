#pragma once
#include "Empleado.h"
#include "Supervisor.h"

using namespace System;

namespace ProyectoSemaforosModel {
	public ref class Operario : Empleado {
	private:

		String^ horaIngreso;
		String^ horaSalida;
		String^ diasTrabajo;
		Supervisor^ objSupervisor;
	public:
		Operario();
		Operario(int codigo, String^ usuario, String^ contrasena,
			String^ nombre, String^ area, String^ telefono,
			String^ direccion, String^ fechaCumpleanhos, String^ horaIngreso, String^ horaSalida,
			String^ diasTrabajo, Supervisor^ objSupervisor);


		//GET-SET

	
		String^ getHoraIngreso();
		void setHoraIngreso(String^ horaIngreso);
		
		String^ getHoraSalida();
		void setHoraSalida(String^ horaSalida);

		String^ getDiasTrabajo();
		void setDiasTrabajo(String^ diasTrabajo);

		Supervisor^ getObjSupervisor();
		void setObjSupervisor(Supervisor^ objSupervisor);

	};
}