#pragma once
#include <iostream>
#include <string>
#include "cPersona.h"
#include "cResort.h"

using namespace std;

class cReserva
{
private:
	cPersona *Persona;
	cResort *Resort;
	string Fecha;
	int Duracion;
	int codReserva;


public:
	cReserva(cPersona *persona, cResort *resort, string fecha, int duracion, int codreserva);
	~cReserva();
	void ImprimirReservas();
	int getCodigo();

};

