#pragma once
#include "Supervisor.h"

using namespace System;

namespace ProyectoSemaforosModel {
	public ref class ControlSupervisor {
	private:
		int codigo;
		String^ analisisDesempeno;
		Supervisor^ objSupervisor;
	public:
		ControlSupervisor();
		ControlSupervisor(int codigo, String^ analisisDesempeno,
			Supervisor^ objSupervisor);

		//GET-SET
		int getCodigo();
		void setCodigo(int codigo);

		String^ getAnalisisDesempeno();
		void setAnalisisDesempeno(String^ analisisDesempeno);

		Supervisor^ getObjSupervisor();
		void setObjSupervisor(Supervisor^ objSupervisor);

	};
}