#include "Sensor.h"
using namespace ProyectoSemaforosModel;

Sensor::Sensor(){}

Sensor::Sensor(int codigo, double distanciaVehiculo, bool detectaVehiculo, List<Vehiculo^>^ listaVehiculo) {
	this->codigo = codigo;
	this->distanciaVehiculo = distanciaVehiculo;
	this->detectaVehiculo = detectaVehiculo;
	this->listaVehiculo = listaVehiculo;
}

int Sensor::getCodigo() {
	return this->codigo;
}
void Sensor::setCodigo(int codigo) {
	this->codigo = codigo;
}

double Sensor::getDistanciaVehiculo() {
	return this->distanciaVehiculo;
}
void Sensor::setDistanciaVehiculo(double distanciaVehiculo) {
	this->distanciaVehiculo = distanciaVehiculo;
}

bool Sensor::getDetectaVehiculo() {
	return this->detectaVehiculo;
}
void Sensor::setDetectaVehiculo(bool detectaVehiculo) {
	this->detectaVehiculo = detectaVehiculo;
}

List<Vehiculo^>^ Sensor::getListaVehiculo() {
	return this->listaVehiculo;
}
void Sensor::setListaVehiculo(List<Vehiculo^>^ listaVehiculo) {
	this->listaVehiculo = listaVehiculo;
}