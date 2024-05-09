#include "RecursosHumanos.h"

using namespace ProyectoSemaforosModel;

RecursosHumanos::RecursosHumanos() {

};


RecursosHumanos::RecursosHumanos(int codigo, List<ReporteRH^>^ listaReporteRH){
	this->codigo = codigo;
	this->listaReporteRH = listaReporteRH;
};

int RecursosHumanos::getCodigo() {
	return this->codigo;
};
void RecursosHumanos::setCodigo(int codigo) {
	this->codigo=codigo;
};

List<ReporteRH^>^ RecursosHumanos::getListaReporteRH() {
	return this->listaReporteRH;
};
void RecursosHumanos::setListaReporteRH(List<ReporteRH^>^ listaReporteRH) {
	this->listaReporteRH=listaReporteRH;
};