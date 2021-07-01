#include <iostream>
#include <string>
#include "cPersona.h"
#include "cResort.h"
#include "cReserva.h"
#include "cListaPersonas.h"
#include "cListaReservas.h"
#include "cListaResorts.h"
#include "Sistema.h"

using namespace std;

int main() {

	Sistema* miSistema = new Sistema();

	miSistema->GenerarListas();//creamos las personas, resorts y reservas y las agregamos a las listas
	miSistema->Listar();//imprimimos las listas 
	miSistema->ProbarEliminar();//eliminamos una reserva, un resort y una persona. volvemos a imprimir las listas
	miSistema->ProbarBuscar();//buscamos una persona, una reserva y un resort y los imprimimos
	miSistema->ProbarQuitar();//quitamos una persona, un resort y una reserva e imprimimos las listas

	delete miSistema;

	return 0;
}