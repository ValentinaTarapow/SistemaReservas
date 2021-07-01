#pragma once
#include <iostream>
#include <string>
#include "cReserva.h"
#define MAX  15

using namespace std;

class cListaReservas
{
private:
	cReserva ** ListaR;
	int cant;//Cantidad de ocupados
	int tam;//Tamanio total

public:
	cListaReservas(int R = MAX);
	~cListaReservas();

	bool Agregar(cReserva*);
	void Listar();
	cReserva* Buscar(int codigo); //la clave para buscar la reserva seria el cod
	bool Eliminar(int codigo);
	cReserva* Quitar(int codigo);//clave para quitar dni 
	int getIndex(int codigo);

};

