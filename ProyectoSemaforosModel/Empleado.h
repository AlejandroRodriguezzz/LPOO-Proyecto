#pragma once

using namespace System;

namespace ProyectoSemaforosModel {
	public ref class Empleado {
	private:
		int codigo;
		String^ usuario;
		String^ contrasena;
		String^ nombre;
		String^ area;
		String^ telefono;
		String^ direccion;
		String^ fechaCumpleanhos;
	public:
		Empleado();
		Empleado(int codigo, String^ usuario, String^ contrasena,
			String^ nombre, String^ area, String^ telefono,
			String^ direccion, String^ fechaCumpleanhos);

		//GET-SET

		int getCodigo();
		void setCodigo(int codigo);

		String^ getUsuario();
		void setUsuario(String^ usuario);

		String^ getContrasena();
		void setContrasena(String^ contrasena);

		String^ getNombre();
		void setNombre(String^ nombre);

		String^ getArea();
		void setArea(String^ area);

		String^ getTelefono();
		void setTelefono(String^ telefono);

		String^ getDireccion();
		void setDireccion(String^ direccion);

		String^ getFechaCumpleanhos();
		void setFechaCumpleanhos(String^ fechaCumpleanhos);
	};
}