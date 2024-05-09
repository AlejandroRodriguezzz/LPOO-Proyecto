#include "DetalleEmergencia.h"

using namespace ProyectoSemaforosModel;

DetalleEmergencia::DetalleEmergencia() {

};


DetalleEmergencia::DetalleEmergencia(int codigo, String^ tipoEmergencia, String^ ubicacion, String^ horaRegistrada) {
	this->codigo = codigo;
	this->tipoEmergencia = tipoEmergencia;
	this->ubicacion = ubicacion;
	this->horaRegistrada = horaRegistrada;
};

int DetalleEmergencia::getCodigo() {
	return this->codigo;
};
void DetalleEmergencia::setCodigo(int codigo) {
	this->codigo=codigo;
};

String^ DetalleEmergencia::getTipoEmergencia() {
	return this->tipoEmergencia;
};
void DetalleEmergencia::setTipoEmergencia(String^ tipoEmergencia) {
	this->tipoEmergencia=tipoEmergencia;
};

String^ DetalleEmergencia::getUbicacion() {
	return this->ubicacion;
};
void DetalleEmergencia::setUbicacion(String^ ubicacion) {
	this->ubicacion=ubicacion;
};

String^ DetalleEmergencia::getHoraRegistrada() {
	return this->horaRegistrada;
};
void DetalleEmergencia::setHoraRegistrada(String^ horaRegistrada) {
	this->horaRegistrada=horaRegistrada;
};
