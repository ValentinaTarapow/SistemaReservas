#include "cListaPersonas.h"



cListaPersonas::cListaPersonas(int P) 

{

	cant = 0;
	this->tam = P;
	this->ListaP = new cPersona *[tam];
	for (int i = 0; i < tam; i++)
	{
		ListaP[i] = NULL;
	}

}


cListaPersonas::~cListaPersonas()
{
	if (ListaP != NULL)
	{
		for (int i = 0; i < cant; i++)
		{
			if (ListaP[i] != NULL)
				delete ListaP[i];
		}

		delete[] ListaP;


	}
}

bool cListaPersonas::Agregar(cPersona* persona)
{
	if (cant == tam) //no queda mas lugar en la lista
		return false;
	int pos = getIndex(persona->getDNI());
	if (pos >= 0) //el elemento ya esta en la lista
		return false; //no queremos duplicados
	ListaP[cant++] = persona;
	return true;
}

void cListaPersonas::Listar() //imprime los elementos de la lista
{
	for (int i = 0; i < cant; i++)
	{
		cout << "\t\t\t\tPersona " << i+1 << endl;

		ListaP[i]->ListarPersonas();

	}

	cout << "_______________________________________________________________________________" << endl;

}

cPersona* cListaPersonas::Buscar(int dni) //Busca el elemento y devuelve el puntero
{
	int pos = getIndex(dni);
	if (pos <= 0) return NULL;


	else return ListaP[pos];

}

bool cListaPersonas::Eliminar(int dni)
{
	cPersona* aux = Quitar(dni);
	if (aux == NULL)
		return false;
	delete aux;
	return true;
}

cPersona * cListaPersonas::Quitar(int dni)
{
	int pos = getIndex(dni);
	if (pos < 0) return NULL;
	cPersona* aux = ListaP[pos];
	for (int i = pos; i < cant - 1; i++)
	{
		ListaP[i] = ListaP[i + 1];
	}
	ListaP[--cant] = NULL;
	return aux;

}


int cListaPersonas::getIndex(int dni) { //devuelve -1 si no esta en la lista, sino devuelve la pos, con indice 0
	int pos = -1;
	cPersona* aux = NULL;
	for (int i = 0; i < cant; i++)
	{
		aux = ListaP[i];
		if (aux->getDNI() == dni)
			return i;
	}
	return -1;

}
