#include "ServicioEmergencia.h"
using namespace ProyectoSemaforosModel;

ServicioEmergencia::ServicioEmergencia(){}

ServicioEmergencia::ServicioEmergencia(int codigo, String^ contacto, Operario^ objOperario, List<DetalleEmergencia^>^ listaDetalleEmergencia) {
	this->codigo = codigo;
	this->contacto = contacto;
	this->objOperario = objOperario;
	this->listaDetalleEmergencia = listaDetalleEmergencia;
}

int ServicioEmergencia::getCodigo() {
	return this->codigo;
}
void ServicioEmergencia::setCodigo(int codigo) {
	this->codigo = codigo;
}

String^ ServicioEmergencia::getContacto() {
	return this->contacto;
}
void ServicioEmergencia::setContacto(String^ contacto) {
	this->contacto = contacto;
}

Operario^ ServicioEmergencia::getObjOperario() {
	return this->objOperario;
}
void ServicioEmergencia::setObjOperario(Operario^ objOperario) {
	this->objOperario = objOperario;
}

List<DetalleEmergencia^>^ ServicioEmergencia::getListaDetalleEmergencia() {
	return this->listaDetalleEmergencia;
}
void ServicioEmergencia::setListaDetalleEmergencia(List<DetalleEmergencia^>^ listaDetalleEmergencia) {
	this->listaDetalleEmergencia = listaDetalleEmergencia;
}
