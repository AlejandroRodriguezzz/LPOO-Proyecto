#include "Supervisor.h"
using namespace ProyectoSemaforosModel;

Supervisor::Supervisor(){}

Supervisor::Supervisor(int codigo) {
	this->codigo = codigo;
}

int Supervisor::getCodigo() {
	return this->codigo;
}
void Supervisor::setCodigo(int codigo) {
	this->codigo = codigo;
}