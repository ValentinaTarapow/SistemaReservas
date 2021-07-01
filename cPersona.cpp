#include "cPersona.h"


cPersona::cPersona(string nombre, string apellido, int dni, cTelefono *tel)
{
	Nombre = nombre;
	Apellido = apellido;
	DNI = dni;
	Telefono = *tel;
}

cPersona::~cPersona()
{
}

void cPersona::ImprimirPersonas()
{
	cout << Nombre << " " << Apellido << endl;
	cout << "DNI:" << DNI << endl;
}

void cPersona::ListarPersonas()
{
	cout << "Nombre: " << Nombre << endl;
	cout << "Apellido: " << Apellido << endl;
	cout << "DNI:  " << DNI << endl;
	cout << "Telefono: " << Telefono.getNumero() << endl << endl;

}

int cPersona::getDNI()
{
	return DNI;
}

