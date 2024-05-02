#include "RecursosHumanos.h"

using namespace ProyectoSemaforosModel;

RecursosHumanos::RecursosHumanos() : Empleado() {

};


RecursosHumanos::RecursosHumanos(int codigo, List<ReporteRH^>^ listaReporteRH, String^ usuario, String^ contrasena, String^ nombre, String^ area, String^ telefono, String^ direccion, String^ fechaCumpleanhos) : Empleado(codigo, usuario, contrasena, nombre, area, telefono, direccion, fechaCumpleanhos) {
	this->listaReporteRH = listaReporteRH;
};



List<ReporteRH^>^ RecursosHumanos::getListaReporteRH() {
	return this->listaReporteRH;
};
void RecursosHumanos::setListaReporteRH(List<ReporteRH^>^ listaReporteRH) {
	this->listaReporteRH;
};