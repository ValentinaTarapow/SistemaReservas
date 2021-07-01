#include "cListaReservas.h"

cListaReservas::cListaReservas(int R)
{
	cant = 0;
	this->tam = R;
	this->ListaR = new cReserva *[tam];
	for (int i = 0; i < tam; i++)
	{
		ListaR[i] = NULL;
	}
}


cListaReservas::~cListaReservas()
{
	if (ListaR != NULL)
	{
		for (int i = 0; i < cant; i++)
		{

			if (ListaR[i] != NULL)
				delete ListaR[i];
		}

		delete[] ListaR;
	}
}

bool cListaReservas::Agregar(cReserva* reserva)
{
	if (cant == tam) //no queda mas lugar en la lista
		return false;
	int pos = getIndex(reserva->getCodigo());
	if (pos >= 0) //el elemento esa en la lista
		return false; //no duplicados
	ListaR[cant++] = reserva;
	return true;
}

void cListaReservas::Listar() //imprime los elementos de la lista
{
	for (int i = 0; i < cant; i++)
	{
		cout << "\t\t\t\tReserva " << i+1 << endl;

		ListaR[i]->ImprimirReservas();

	}
	cout << "_______________________________________________________________________________" << endl;

}

cReserva* cListaReservas::Buscar(int codigo) //busca el elemento y devuelve su puntero
{
	int pos = getIndex(codigo);
	if (pos <= 0) return NULL;
	return ListaR[pos];

}

bool cListaReservas::Eliminar(int codigo)
{
	cReserva* aux = Quitar(codigo);
	if (aux == NULL)
		return false;
	delete aux;
	return true;
}

cReserva* cListaReservas::Quitar(int codigo)
{
	int pos = getIndex(codigo);
	if (pos < 0) return NULL;
	cReserva* aux = ListaR[pos];
	ListaR[1];
	for (int i = pos; i < cant - 1; i++)
	{
		ListaR[i] = ListaR[i + 1];
	}
	ListaR[--cant] = NULL;
	return aux;

}


int cListaReservas::getIndex(int codigo) { //devuelve -1 si no esta en la lista, sino devuelve la pos, con indice 0

	int pos = -1;
	cReserva* aux = NULL;
	for (int i = 0; i < cant; i++)
	{
		aux = ListaR[i];
		if (aux->getCodigo() == codigo)
			return i;
	}
	return -1;

}
