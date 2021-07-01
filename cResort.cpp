#include "cResort.h"

cResort::cResort() {};


cResort::cResort(string nomresort, string direccion, cTelefono* tel1, cTelefono* tel2)
{
	nombreResort = nomresort;
	Direccion = direccion;
	this->Telefono1 = *tel1;   
	this->Telefono2 = *tel2;
}

cResort::~cResort()
{
}

void cResort::ImprimirResorts()
{
	cout << nombreResort << endl;
}

void cResort::ListarResorts()
{
	cout << "Nombre: " << nombreResort << endl;
	cout << "Direccion: " << Direccion << endl;
	cout << "Telefono principal: " << Telefono1.getNumero() << endl;
	cout << "Telefono auxiliar: " << Telefono2.getNumero() << endl << endl;
}


cTelefono cResort::getTelefono1()
{
	return Telefono1;
}

cTelefono cResort::getTelefono2()
{
	return Telefono2;
}
