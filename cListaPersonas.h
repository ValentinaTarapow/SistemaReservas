#pragma once
#include <iostream>
#include <string>
#include "cPersona.h"
#define MAX 15

using namespace std;

class cListaPersonas
{
private:
	cPersona **ListaP;
	int cant;//Cantidad de ocupados
	int tam;//Tamaño total

public:
	cListaPersonas(int P=MAX);
	~cListaPersonas();
	bool Agregar(cPersona*);
	void Listar();
	cPersona* Buscar(int dni);
	bool Eliminar(int dni);
	cPersona* Quitar(int dni);
	int getIndex(int dni);

};
