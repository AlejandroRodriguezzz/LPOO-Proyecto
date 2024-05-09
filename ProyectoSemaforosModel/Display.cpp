#include "Display.h"

using namespace ProyectoSemaforosModel;

Display::Display() {

};


Display::Display(int codigo, String^ mostrarEstado,Semaforo^ objSemaforo) {
	this->codigo = codigo;
	this->mostrarEstado = mostrarEstado;
	this->objSemaforo = objSemaforo;
};

int Display::getCodigo() {
	return this->codigo;
};
void Display::setCodigo(int codigo) {
	this->codigo=codigo;
};

String^ Display::getMostrarEstado() {
	return this->mostrarEstado;
};
void Display::setMostrarEstado(String^ mostrarEstado) {
	this->mostrarEstado=mostrarEstado;
};

Semaforo^ Display::getObjSemaforo() {
	return this->objSemaforo;
};
void Display::setObjSemaforo(Semaforo^ objSemaforo) {
	this->objSemaforo=objSemaforo;
};