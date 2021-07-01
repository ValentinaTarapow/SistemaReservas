#pragma once

#include <iostream>
#include <string>
#include "cListaReservas.h"
#include "cListaPersonas.h"
#include "cListaResorts.h"

using namespace std;

class Sistema
{
private:
	cListaPersonas* ListaPer;
	cListaResorts* ListaResort;
	cListaReservas* ListaReserva;
public:
	Sistema();
	~Sistema();
	void GenerarListas();
	void Listar();
	void ProbarEliminar();
	void ProbarBuscar();
	void ProbarQuitar();

	cListaPersonas* getListaPersonas() { return ListaPer; }
	cListaReservas* getListaReservas() { return ListaReserva; }
	cListaResorts* getListaResorts() { return ListaResort; }
	
};
