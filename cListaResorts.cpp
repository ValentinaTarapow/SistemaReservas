#include "cResort.h"
#include "cListaResorts.h"

using namespace std;

cListaResorts::cListaResorts(int H)
{
	cant = 0;
	this->tam = H;
	this->ListaH = new cResort *[tam];
	for (int i = 0; i < tam; i++)
	{
		ListaH[i] = NULL;
	}

}


cListaResorts::~cListaResorts()
{
	if (ListaH != NULL)
	{
		for (int i = 0; i < cant; i++)
		{

			if (ListaH[i] != NULL)
				delete ListaH[i];
		}

		delete[] ListaH;


	}
}

bool cListaResorts::Agregar(cResort* resort)
{
	if (cant == tam) //no queda mas lugar en la lista
		return false;
	int pos = getIndex(resort->getNombre());
	if (pos >= 0) //el elemento esa en la lista
			return false; //no duplicados
	ListaH[cant++] = resort;
	return true;
}

void cListaResorts::Listar() //imprime los elementos de la lista
{
	for (int i = 0; i < cant; i++)
	{
		cout << "\t\t\t\tResort " << i+1 << endl;

		ListaH[i]->ListarResorts();
		
	}

	cout << "_______________________________________________________________________________" << endl;
}

cResort* cListaResorts::Buscar(string nomresort)//busca el elemento y devuelve su puntero
{
	int pos = getIndex(nomresort);
	if (pos <= 0) return NULL;
	return ListaH[pos];

}

bool cListaResorts::Eliminar(string nomresort)
{
	cResort* aux = Quitar(nomresort);
	if (aux == NULL)
		return false;
	delete aux;
	return true;
}

cResort* cListaResorts::Quitar(string nomresort)
{
	int pos = getIndex(nomresort);
	if (pos < 0) return NULL;
	cResort* aux = ListaH[pos];
	for (int i = pos; i < cant - 1; i++)
	{
		ListaH[i] = ListaH[i + 1];
	}
	ListaH[--cant] = NULL;
	return aux;

}

int cListaResorts::getIndex(string nomresort) { //devuelve -1 si no esta en la lista, sino devuelve la pos, con indice 0

	cResort* aux = NULL;
	for (int i = 0; i < cant; i++)
	{
		aux = ListaH[i];
		if (aux->getNombre() == nomresort)
			return i;
	}
	return -1;

}
