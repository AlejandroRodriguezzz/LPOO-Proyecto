#include "AccionOperario.h"

using namespace ProyectoSemaforosModel;

AccionOperario::AccionOperario() {

};

AccionOperario::AccionOperario(int codigo, bool darPrioridadA, bool darPrioridadB, Operario^ objOperario, List<Sensor^>^ listaSensor) {
	this->codigo = codigo;
	this->darPrioridadA = darPrioridadA;
	this->darPrioridadB = darPrioridadB;
	this->objOperario = objOperario;
	this->listaSensor = listaSensor;
};
int AccionOperario::getCodigo() {
	return this->codigo;
};
void AccionOperario::setCodigo(int codigo) {
	this->codigo=codigo;
};

bool AccionOperario::getDarPrioridadA() {
	return this->darPrioridadA;
};
void AccionOperario::setDarPrioridadA(bool darPrioridadA) {
	this->darPrioridadA=darPrioridadA;
};

bool AccionOperario::getDarPrioridadB() {
	return this->darPrioridadB;
};
void AccionOperario::setDarPrioridadB(bool darPrioridadB) {
	this->darPrioridadB=darPrioridadB;
};

Operario^ AccionOperario::getObjOperario() {
	return	this->objOperario;
};
void AccionOperario::setObjOperario(Operario^ objOperario) {
	this->objOperario=objOperario;
};

List<Sensor^>^ AccionOperario::getListaSensor() {
	return this->listaSensor;
}
;
void AccionOperario::setListaSensor(List<Sensor^>^ listaSensor) {
	this->listaSensor=listaSensor;
};



