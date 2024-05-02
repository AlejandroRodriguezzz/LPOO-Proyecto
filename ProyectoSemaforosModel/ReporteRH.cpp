#include "ReporteRH.h"
using namespace ProyectoSemaforosModel;

ReporteRH::ReporteRH(){

}

ReporteRH::ReporteRH(int codigo, String^ reporteRH) {
	this->codigo = codigo;
	this->reporteRH = reporteRH;
}

int ReporteRH::getCodigo() {
	return this->codigo;
}
void ReporteRH::setCodigo(int codigo) {
	this->codigo = codigo;
}

String^ ReporteRH::getReporteRH() {
	return this->reporteRH;
}
void ReporteRH::setReporteRH(String^ reporteRH) {
	this->reporteRH = reporteRH;
}