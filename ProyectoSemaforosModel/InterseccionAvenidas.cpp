#include "InterseccionAvenidas.h"

using namespace ProyectoSemaforosModel;

InterseccionAvenidas::InterseccionAvenidas() {

};


InterseccionAvenidas::InterseccionAvenidas(int codigo, String^ nombresAvenidas, int cantidadAvenidas, int cantidadSemaforos, List<Transito^>^ listaTransito, List<Semaforo^>^ listaSemaforo) {
	this->codigo = codigo;
	this->nombresAvenidas = nombresAvenidas;
	this->cantidadAvenidas = cantidadAvenidas;
	this->cantidadSemaforos = cantidadSemaforos;
	this->listaTransito = listaTransito;
	this->listaSemaforo = listaSemaforo;
};

int InterseccionAvenidas::getCodigo() {
	return this->codigo;
};
void InterseccionAvenidas::setCodigo(int codigo) {
	this->codigo;
};

String^ InterseccionAvenidas::getNombresAvenidas() {
	return this->nombresAvenidas;
};
void InterseccionAvenidas::setNombresAvenidas(String^ nombresAvenidas) {
	this->nombresAvenidas;
};

int InterseccionAvenidas::getCantidadAvenidas() {
	return this->cantidadAvenidas;
};
void InterseccionAvenidas::setCantidadAvenidas(int cantidadAvenidas) {
	this->cantidadAvenidas;
};

int InterseccionAvenidas::getCantidadSemaforos() {
	return this->cantidadSemaforos;
};
void InterseccionAvenidas::setCantidadSemaforos(int cantidadSemaforos) {
	this->cantidadSemaforos;
};

List<Transito^>^ InterseccionAvenidas::getListaTransito() {
	return this->listaTransito;
};
void InterseccionAvenidas::setListaTransito(List<Transito^>^ listaTransito) {
	this->listaTransito;
};

List<Semaforo^>^ InterseccionAvenidas::getListaSemaforo() {
	return this->listaSemaforo;
};
void InterseccionAvenidas::setListaSemaforo(List<Semaforo^>^ listaSemaforo) {
	this->listaSemaforo;
};