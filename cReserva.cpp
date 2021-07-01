#include "cReserva.h"

cReserva::cReserva(cPersona *persona, cResort *resort, string fecha, int duracion, int codreserva)
{
	Persona = persona;
	Resort = resort;
	Fecha = fecha;
	Duracion = duracion;
	codReserva = codreserva;

}

cReserva::~cReserva()
{
}

void cReserva::ImprimirReservas()
{
	cout << "Persona: ";
	Persona->ImprimirPersonas();
	cout << "Resort: ";
	Resort->ImprimirResorts();
	cout << "Fecha: " << Fecha << endl;
	cout << "Duracion: " << Duracion << endl;
	cout << "Codigo de Reserva: " << codReserva << endl << endl;

}

int cReserva::getCodigo() {
	return codReserva;
}
