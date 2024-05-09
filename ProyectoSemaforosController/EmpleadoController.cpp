#include"EmpleadoController.h"

using namespace ProyectoSemaforosController;
using namespace System::IO;//Permite trabajar con archivos de texto

EmpleadoController::EmpleadoController() {

};


List<Empleado^>^ EmpleadoController::buscarEmpleadoxNombre(String^ nombreEmpleado) {
	
	List<Empleado^>^ listaEmpleados = gcnew List<Empleado^>();//creamos lista para empleados
	array<String^>^ lineas = File::ReadAllLines("operarios.txt");//separamos lineas de empleados
	String^ separadores = ";";
	for each (String ^ lineaEmpleado in lineas) {
		//separo los datos de una linea en substrings
		array<String^>^ datos = lineaEmpleado->Split(separadores->ToCharArray());

		int codigo = Convert::ToInt32(datos[0]);
		String^ usuario = datos[1];
		String^ contrasena = datos[2];
		String^ nombre = datos[3];
		String^ area = datos[4];
		String^ telefono = datos[5];
		String^ direccion = datos[6];
		String^ fechaCumpleanhos = datos[7];
		if (nombre->CompareTo(nombreEmpleado)==0 ){
			Empleado^ objEmpleado = gcnew Empleado(codigo, usuario, contrasena, nombre, area, telefono, direccion, fechaCumpleanhos);
			listaEmpleados->Add(objEmpleado);
		}
	}
	return listaEmpleados;
};

List<Empleado^>^ EmpleadoController::buscarUsuarioContrasena(String^ usuarioIng, String^ contrasenaIng, String^ *cargo) {
	
	List<Empleado^>^ listaEmpleados = gcnew List<Empleado^>();//creamos lista para empleados
	array<String^>^ lineas = File::ReadAllLines("operarios.txt");//separamos lineas de empleados
	String^ separadores = ";";
	for each (String ^ lineaEmpleado in lineas) {
		//separo los datos de una linea en substrings
		array<String^>^ datos = lineaEmpleado->Split(separadores->ToCharArray());

		int codigo = Convert::ToInt32(datos[0]);
		String^ usuario = datos[1];
		String^ contrasena = datos[2];
		String^ nombre = datos[3];
		String^ area = datos[4];
		String^ telefono = datos[5];
		String^ direccion = datos[6];
		String^ fechaCumpleanhos = datos[7];
		if ((usuario->CompareTo(usuarioIng) == 0) && (contrasena->CompareTo(contrasenaIng)) == 0) {
			Empleado^ objEmpleado = gcnew Empleado(codigo, usuario, contrasena, nombre, area, telefono, direccion, fechaCumpleanhos);
			listaEmpleados->Add(objEmpleado);
			*cargo = area;
		}
	}
	return listaEmpleados;
};

List<Empleado^>^ EmpleadoController::buscarEmpleadoAll() {//Busca a todos los empleados para poder agregar nuevos al final de la lista
	List<Empleado^>^ listaEmpleados = gcnew List<Empleado^>();//creamos lista para empleados
	array<String^>^ lineas = File::ReadAllLines("operarios.txt");//separamos lineas de empleados
	String^ separadores = ";";
	for each (String ^ lineaEmpleado in lineas) {
		//separo los datos de una linea en substrings
		array<String^>^ datos = lineaEmpleado->Split(separadores->ToCharArray());

		int codigo = Convert::ToInt32(datos[0]);
		String^ usuario = datos[1];
		String^ contrasena = datos[2];
		String^ nombre = datos[3];
		String^ area = datos[4];
		String^ telefono = datos[5];
		String^ direccion = datos[6];
		String^ fechaCumpleanhos = datos[7];
		Empleado^ objEmpleado = gcnew Empleado(codigo, usuario, contrasena, nombre, area, telefono, direccion, fechaCumpleanhos);
		listaEmpleados->Add(objEmpleado);
	}
	return listaEmpleados;
};

void EmpleadoController::agregarEmpleado(int codigo, String^ usuario, String^ contrasena, String^ nombre, String^ area, String^ telefono, String^ direccion, String^ fechaCumpleanhos) {

	List<Empleado^>^ listaEmpleados = buscarEmpleadoAll();
	Empleado^ objEmpleadoNuevo = gcnew Empleado(codigo, usuario, contrasena, nombre, area, telefono, direccion, fechaCumpleanhos);
	listaEmpleados->Add(objEmpleadoNuevo);
	escribirArchivo(listaEmpleados);


}
void EmpleadoController::escribirArchivo(List<Empleado^>^ listaEmpleados) {
	
	array<String^>^ lineasArchivo = gcnew array<String^>(listaEmpleados->Count);
	for (int i = 0; i < listaEmpleados->Count; i++) {
		Empleado^ objEmpleado = listaEmpleados[i];
		lineasArchivo[i] = Convert::ToString(objEmpleado->getCodigo())+";"+objEmpleado->getUsuario() + ";" + objEmpleado->getContrasena() + ";" + objEmpleado->getNombre() + ";" + objEmpleado->getArea() + ";" + objEmpleado->getTelefono() + ";" + objEmpleado->getDireccion() + ";" + objEmpleado->getFechaCumpleanhos();
	}
	File::WriteAllLines("operarios.txt", lineasArchivo);	
};

