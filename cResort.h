#pragma once
#include <iostream>
#include <string>
#include "cTelefono.h"

using namespace std;

class cResort
{
private:
	
	string nombreResort;
	cTelefono Telefono1;
	cTelefono Telefono2;
	string Direccion;

public:
	cResort();
	cResort(string nomresort, string direccion, cTelefono* tel1, cTelefono* tel2);
	~cResort();
	void ImprimirResorts();
	void ListarResorts();
	cTelefono getTelefono1();
	cTelefono getTelefono2();
	string getNombre() {return nombreResort; }
};

