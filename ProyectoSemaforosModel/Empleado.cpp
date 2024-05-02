#include "Empleado.h"

using namespace ProyectoSemaforosModel;

Empleado::Empleado() {

};


Empleado::Empleado(int codigo, String^ usuario, String^ contrasena,String^ nombre, String^ area, String^ telefono,String^ direccion, String^ fechaCumpleanhos) {
	this->codigo = codigo;
	this->usuario = usuario;
	this->contrasena = contrasena;
	this->nombre = nombre;
	this->area = area;
	this->telefono = telefono;
	this->direccion = direccion;
	this->fechaCumpleanhos = fechaCumpleanhos;
};
int Empleado::getCodigo() {
	return this->codigo;
};
void Empleado::setCodigo(int codigo) {
	this->codigo;
};

String^ Empleado::getUsuario() {
	return this->usuario;
};
void Empleado::setUsuario(String^ usuario) {
	this->usuario;
};

String^ Empleado::getContrasena() {
	return this->contrasena;
};
void Empleado::setContrasena(String^ contrasena) {
	this->contrasena;
};

String^ Empleado::getNombre() {
	return this->nombre;
};
void Empleado::setNombre(String^ nombre) {
	this->nombre;
};


String^ Empleado::getArea() {
	return this->area;
};
void Empleado::setArea(String^ area) {
	this->area;
};



String^ Empleado::getTelefono() {
	return this->telefono;
};
void Empleado::setTelefono(String^ telefono) {
	this->telefono;
};

String^ Empleado::getDireccion() {
	return this->direccion;
};
void Empleado::setDireccion(String^ direccion) {
	this->direccion;
};

String^ Empleado::getFechaCumpleanhos() {
	return this->fechaCumpleanhos;
};
void Empleado::setFechaCumpleanhos(String^ fechaCumpleanhos) {
	this->fechaCumpleanhos;
};
