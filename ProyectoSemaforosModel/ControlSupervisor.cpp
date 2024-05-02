#include "ControlSupervisor.h"

using namespace ProyectoSemaforosModel;

ControlSupervisor::ControlSupervisor() {

};


ControlSupervisor::ControlSupervisor(int codigo, String^ analisisDesempeno, Supervisor^ objSupervisor) {
	this->codigo = codigo;
	this->analisisDesempeno = analisisDesempeno;
	this->objSupervisor = objSupervisor;
};

int ControlSupervisor::getCodigo(){
	return this->codigo;
}
;
void ControlSupervisor::setCodigo(int codigo) {
	this->codigo;
};

String^ ControlSupervisor::getAnalisisDesempeno() {
	return this->analisisDesempeno;
};
void ControlSupervisor::setAnalisisDesempeno(String^ analisisDesempeno) {
	this->analisisDesempeno;
};

Supervisor^ ControlSupervisor::getObjSupervisor() {
	return this->objSupervisor;
};
void ControlSupervisor::setObjSupervisor(Supervisor^ objSupervisor) {
	this->objSupervisor;
};