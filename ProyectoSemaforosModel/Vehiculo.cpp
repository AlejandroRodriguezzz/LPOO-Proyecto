#include "Vehiculo.h"
using namespace ProyectoSemaforosModel;

Vehiculo::Vehiculo(){}

Vehiculo::Vehiculo(int codigo, int tiempoEspera, ServicioEmergencia^ objServicioEmergencia) {
	this->codigo = codigo;
	this->tiempoEspera = tiempoEspera;
	this->objServicioEmergencia = objServicioEmergencia;
}

int Vehiculo::getCodigo() {
	return this->codigo;
}
void Vehiculo::setCodigo(int codigo) {
	this->codigo = codigo;
}

int Vehiculo::getTiempoEspera() {
	return this->tiempoEspera;
}
void Vehiculo::setTiempoEspera(int tiempoEspera) {
	this->tiempoEspera = tiempoEspera;
}

ServicioEmergencia^ Vehiculo::getServicioEmergencia() {
	return this->objServicioEmergencia;
}
void Vehiculo::setServicioEmergencia(ServicioEmergencia^ objServicioEmergencia) {
	this->objServicioEmergencia = objServicioEmergencia;
}