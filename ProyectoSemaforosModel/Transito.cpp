#include "Transito.h"
using namespace ProyectoSemaforosModel;

Transito::Transito(){}

Transito::Transito(int codigo, String^ estadoTransito, List<Sensor^>^ listaSensor) {
	this->codigo = codigo;
	this->estadoTransito = estadoTransito;
	this->listaSensor = listaSensor;
}

int Transito::getCodigo() {
	return this->codigo;
}
void Transito::setCodigo(int codigo) {
	this->codigo = codigo;
}

String^ Transito::getEstadoTransito() {
	return this->estadoTransito;
}
void Transito::setEstadoTransito(String^ estadoTransito) {
	this->estadoTransito = estadoTransito;
}

List<Sensor^>^ Transito::getListaSensor() {
	return this->listaSensor;
}
void Transito::setListaSensor(List<Sensor^>^ listaSensor) {
	this->listaSensor = listaSensor;
}