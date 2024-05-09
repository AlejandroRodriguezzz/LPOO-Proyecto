#pragma once
namespace ProyectoSemaforosController {

	using namespace System::Collections::Generic;
	using namespace ProyectoSemaforosModel;
	using namespace System;

	public ref class EmpleadoController {
		public:
			EmpleadoController();
			List<Empleado^>^ buscarEmpleadoxNombre(String^ nombreEmpleado);
			List<Empleado^>^ buscarUsuarioContrasena(String^ usuarioIng, String^ contrasenaIng, String^*cargo);
			List<Empleado^>^ buscarEmpleadoAll();
			void agregarEmpleado(int codigo, String^ usuario, String^ contrasena, String^ nombre, String^ area, String^ telefono, String^ direccion, String^ fechaCumpleanhos);
			void escribirArchivo(List<Empleado^>^ listaEmpleados);
	};

}