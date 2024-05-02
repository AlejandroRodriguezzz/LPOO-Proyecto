#include "ReporteTransito.h"
using namespace ProyectoSemaforosModel;

ReporteTransito::ReporteTransito(){}

ReporteTransito::ReporteTransito(int codigo, String^ reporteDelDia, Operario^ objOperario) {
	this->codigo = codigo;
	this->reporteDelDia = reporteDelDia;
	this->objOperario = objOperario;
}

int ReporteTransito::getCodigo() {
	return this->codigo;
}
void ReporteTransito::setCodigo(int codigo) {
	this->codigo = codigo;
}

String^ ReporteTransito::getReporteDelDia() {
	return this->reporteDelDia;
}
void ReporteTransito::setReporteDelDia(String^ reporteDelDia) {
	this->reporteDelDia = reporteDelDia;
}

Operario^ ReporteTransito::getObjOperario() {
	return this->objOperario;
}
void ReporteTransito::setObjOperario(Operario^ objOperario) {
	this->objOperario = objOperario;
}