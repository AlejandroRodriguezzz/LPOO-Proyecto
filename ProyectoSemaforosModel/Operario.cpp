#include "Operario.h"

using namespace ProyectoSemaforosModel;

Operario::Operario() : Empleado() {

};


Operario::Operario(int codigo, String^ horaIngreso, String^ horaSalida,String^ diasTrabajo, Supervisor^ objSupervisor, String^ usuario, String^ contrasena, String^ nombre, String^ area, String^ telefono, String^ direccion, String^ fechaCumpleanhos) : Empleado(codigo, usuario, contrasena, nombre, area, telefono, direccion, fechaCumpleanhos) {
	this->horaIngreso = horaIngreso;
	this->horaSalida = horaSalida;
	this->diasTrabajo = diasTrabajo;
	this->objSupervisor = objSupervisor;
};


String^ Operario::getHoraIngreso() {
	return this->horaIngreso;
};
void Operario::setHoraIngreso(String^ horaIngreso) {
	this->horaIngreso;
};

String^ Operario::getHoraSalida() {
	return this->horaSalida;
};
void Operario::setHoraSalida(String^ horaSalida) {
	this->horaSalida;
};

String^ Operario::getDiasTrabajo() {
	return this->diasTrabajo;
};
void Operario::setDiasTrabajo(String^ diasTrabajo) {
	this->diasTrabajo;
};

Supervisor^ Operario::getObjSupervisor() {
	return this->objSupervisor;
};
void Operario::setObjSupervisor(Supervisor^ objSupervisor) {
	this->objSupervisor;
};