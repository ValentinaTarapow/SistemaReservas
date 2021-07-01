#pragma once
#include <iostream>
#include <string>
#include "cResort.h"
#define MAX 15

using namespace std;

class cListaResorts
{
private:
	cResort ** ListaH;
	int cant;//Cantidad Actual
	int tam;//Tamaño total

public:
	cListaResorts(int H = MAX);
	~cListaResorts();
	bool Agregar(cResort*);
	void Listar();
	cResort* Buscar(string nomresort); //la clave para buscar el resort es el nombre
	bool Eliminar(string nomresort);
	cResort* Quitar(string nomresort);
	int getIndex(string nomresort);
};
