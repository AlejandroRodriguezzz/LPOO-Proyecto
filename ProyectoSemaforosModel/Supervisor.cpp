#include "Supervisor.h"
using namespace ProyectoSemaforosModel;

Supervisor::Supervisor(): Empleado(){

}

Supervisor::Supervisor(int codigo,String^ contrasena,String^ usuario,String^ nombre, String^ area, String^ telefono,String^ direccion, String^ fechaCumpleanhos): Empleado(codigo,usuario,contrasena,nombre,area, telefono, direccion, fechaCumpleanhos){
	
}
