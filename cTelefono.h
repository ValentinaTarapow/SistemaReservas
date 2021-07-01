#pragma once
#include <iostream>
#include <string>

using namespace std;

class cTelefono
{
private:
	int Numero;

public:
	cTelefono();
	cTelefono(int numero);
	~cTelefono();
	int getNumero(){ return Numero; }
};
