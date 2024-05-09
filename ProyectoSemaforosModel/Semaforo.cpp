#include "Semaforo.h"
using namespace ProyectoSemaforosModel;

Semaforo::Semaforo(){}

Semaforo::Semaforo(int codigo, String^ estadoColor, int estadoTiempo, int tiempoMaxVerde, int tiempoMaxRojo, int tiempoMaxAmbar) {
	this->codigo = codigo;
	this->estadoColor = estadoColor;
	this->estadoTiempo = estadoTiempo;
	this->tiempoMaxVerde = tiempoMaxVerde;
	this->tiempoMaxRojo = tiempoMaxRojo;
	this->tiempoMaxAmbar = tiempoMaxAmbar;
}

int Semaforo::getCodigo() {
	return this->codigo;
}
void Semaforo::setCodigo(int codigo) {
	this->codigo = codigo;
}

String^ Semaforo::getEstadoColor() {
	return this->estadoColor;
}
void Semaforo::setEstadoColor(String^ estadoColor) {
	this->estadoColor = estadoColor;
}

int Semaforo::getEstadoTiempo() {
	return this->estadoTiempo;
}
void Semaforo::setEstadoTiempo(int estadoTiempo) {
	this->estadoTiempo = estadoTiempo;
}

int Semaforo::getTiempoMaxVerde() {
	return this->tiempoMaxVerde;
}
void Semaforo::setTiempoMaxVerde(int tiempoMaxVerde) {
	this->tiempoMaxVerde = tiempoMaxVerde;
}

int Semaforo::getTiempoMaxRojo() {
	return this->tiempoMaxRojo;
}
void Semaforo::setTiempoMaxRojo(int tiempoMaxRojo) {
	this->tiempoMaxRojo = tiempoMaxRojo;
}

int Semaforo::getTiempoMaxAmbar() {
	return this->tiempoMaxAmbar;
}
void Semaforo::setTiempoMaxAmbar(int tiempoMaxAmbar) {
	this->tiempoMaxAmbar = tiempoMaxAmbar;
}