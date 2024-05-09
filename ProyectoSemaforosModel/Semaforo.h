#pragma once

using namespace System;

namespace ProyectoSemaforosModel {
	public ref class Semaforo {
	private:
		int codigo;
		String^ estadoColor;
		int estadoTiempo;
		int tiempoMaxVerde;
		int tiempoMaxRojo;
		int tiempoMaxAmbar;
	public:
		Semaforo();
		Semaforo(int codigo, String^ estadoColor,
			     int estadoTiempo, int tiempoMaxVerde,
			     int tiempoMaxRojo, int tiempoMaxAmbar);

		int getCodigo();
		void setCodigo(int codigo);

		String^ getEstadoColor();
		void setEstadoColor(String^ estadoColor);

		int getEstadoTiempo();
		void setEstadoTiempo(int estadoTiempo);

		int getTiempoMaxVerde();
		void setTiempoMaxVerde(int tiempoMaxVerde);

		int getTiempoMaxRojo();
		void setTiempoMaxRojo(int tiempoMaxRojo);

		int getTiempoMaxAmbar();
		void setTiempoMaxAmbar(int tiempoMaxAmbar);

	};
}