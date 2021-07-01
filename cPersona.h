#pragma once
#include <iostream>
#include <string>
#include "cTelefono.h"

using namespace std;

class cPersona
{
private:
	string Nombre;
	string Apellido;
	int DNI;
	cTelefono Telefono;

public:

	cPersona(string nombre, string apellido, int dni, cTelefono *tel);
	~cPersona();
	void ImprimirPersonas();
	void ListarPersonas();
	int getDNI();
	
};

