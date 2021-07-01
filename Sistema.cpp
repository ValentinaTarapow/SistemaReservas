#include "Sistema.h"

Sistema::Sistema()
{

	ListaPer = new cListaPersonas;
	ListaReserva = new cListaReservas;
	ListaResort = new cListaResorts;


}

Sistema::~Sistema()
{
	delete ListaPer;
	delete ListaReserva;
	delete ListaResort;
}

void Sistema::GenerarListas()
{
	//creo los telefonos
	cTelefono* telefono1 = new cTelefono(1125459684);
	cTelefono* telefono2 = new cTelefono(1166548965);
	cTelefono* telefono3 = new cTelefono(1123586749);
	cTelefono* telefono4 = new cTelefono(1124693567);
	cTelefono* telefono5 = new cTelefono(1135689785);

	cTelefono* telefonoP1 = new cTelefono(1135689775); //Telefono principal
	cTelefono* telefonoA1 = new cTelefono(1135649785); //Telefono auxiliar
	cTelefono* telefonoP2 = new cTelefono(1139689775); //Telefono principal
	cTelefono* telefonoA2 = new cTelefono(1135589785); //Telefono auxiliar
	cTelefono* telefonoP3 = new cTelefono(1135658855); //Telefono principal
	cTelefono* telefonoA3 = new cTelefono(1154849785); //Telefono auxiliar 
	cTelefono* telefonoP4 = new cTelefono(1112585575); //Telefono principal
	cTelefono* telefonoA4 = new cTelefono(1135642151); //Telefono auxiliar
	cTelefono* telefonoP5 = new cTelefono(1135682559); //Telefono principal
	cTelefono* telefonoA5 = new cTelefono(1135647567); //Telefono auxiliar

	// creo personas
	cPersona* Persona1 = new cPersona("Valentina", "Tarapow", 41257895, telefono1);
	cPersona* Persona2 = new cPersona("Mark", "Otto", 41962722, telefono2);
	cPersona* Persona3 = new cPersona("Niklaus", "Wirth", 12345678, telefono3);
	cPersona* Persona4 = new cPersona("Dennis", "Ritchie", 32145678, telefono4);
	cPersona* Persona5 = new cPersona("Alan", "Turing", 34521628, telefono5);

	//creo resorts
	cResort* Resort1 = new cResort("Aguas Claras", "Av calle falsa 123", telefonoP1, telefonoA1);
	cResort* Resort2 = new cResort("Cielo Azul", "Bogota 1234", telefonoP2, telefonoA2);
	cResort* Resort3 = new cResort("Purmamarca", "Junin 767", telefonoP3, telefonoA3);
	cResort* Resort4 = new cResort("Potrerillos", "Quirno 234", telefonoP4, telefonoA4);
	cResort* Resort5 = new cResort("Valle Grande", "Santa fe 656", telefonoP5, telefonoA5);

	//creo reservas
	cReserva* Reserva1 = new cReserva(Persona1, Resort1, "5/1/2021", 7, 11);
	cReserva* Reserva2 = new cReserva(Persona2, Resort2, "24/4/2020", 15, 22);
	cReserva* Reserva3 = new cReserva(Persona3, Resort3, "15/2/2021", 5, 33);
	cReserva* Reserva4 = new cReserva(Persona4, Resort4, "1/3/2020", 15, 44);
	cReserva* Reserva5 = new cReserva(Persona5, Resort5, "8/5/2020", 3, 55);
	cReserva* Reserva6 = new cReserva(Persona1, Resort5, "27/4/2020", 10, 66);
	cReserva* Reserva7 = new cReserva(Persona2, Resort4, "2/7/2020", 7, 77);
	cReserva* Reserva8 = new cReserva(Persona3, Resort3, "27/7/2021", 5, 88);
	cReserva* Reserva9 = new cReserva(Persona4, Resort2, "13/3/2020", 40, 99);
	cReserva* Reserva10 = new  cReserva(Persona5, Resort1, "8/5/2020", 2, 101);

	//agrego a las personas a la lista
	ListaPer->Agregar(Persona1);
	ListaPer->Agregar(Persona2);
	ListaPer->Agregar(Persona3);
	ListaPer->Agregar(Persona4);
	ListaPer->Agregar(Persona5);

	//agrego a los resorts a la lista
	ListaResort->Agregar(Resort1);
	ListaResort->Agregar(Resort2);
	ListaResort->Agregar(Resort3);
	ListaResort->Agregar(Resort4);
	ListaResort->Agregar(Resort5);

	//agrego a las reservas a la lista
	ListaReserva->Agregar(Reserva1);
	ListaReserva->Agregar(Reserva2);
	ListaReserva->Agregar(Reserva3);
	ListaReserva->Agregar(Reserva4);
	ListaReserva->Agregar(Reserva5);
	ListaReserva->Agregar(Reserva6);
	ListaReserva->Agregar(Reserva7);
	ListaReserva->Agregar(Reserva8);
	ListaReserva->Agregar(Reserva9);
	ListaReserva->Agregar(Reserva10);

}

void Sistema::Listar()
{
	cout << "\t\t\t\t\tPersonas" << endl;
	cout << "\t\t\t\t\t^^^^^^^^" << endl;
	ListaPer->Listar();
	cout << "\t\t\t\t\tResorts" << endl;
	cout << "\t\t\t\t\t^^^^^^^" << endl;
	ListaResort->Listar();
	cout << "\t\t\t\t\tReservas" << endl;
	cout << "\t\t\t\t\t^^^^^^^^" << endl;
	ListaReserva->Listar();

}

void Sistema::ProbarEliminar() //pruebo el metodo eliminar en todas las clases
{
	//en reserva
	if (ListaReserva->Eliminar(11) == true)
	{
		cout << "Reserva eliminada con exito: " << endl;
		ListaReserva->Listar();
		cout << endl;

	}
	else "No se pudo eliminar reserva"; cout << endl;

	//en resort
	if (ListaResort->Eliminar("Casa") == true)
	{
		cout << "Resort eliminado con exito: " << endl;
		ListaResort->Listar();
		cout << endl;

	}
	else cout << "No se pudo eliminar resort" << endl; cout << endl;

	//en persona
	if (ListaPer->Eliminar(12345678) == true)
	{
		cout << "Persona eliminada con exito: " << endl;
		ListaPer->Listar();
		cout << endl;

	}
	else cout << "No se pudo eliminar persona" << endl; cout << endl;

}

void Sistema::ProbarBuscar()//pruebo buscar en todas las clases
{
	//en personas
	if (ListaPer->Buscar(32145678) != nullptr)
	{
		cout << "Persona encontrada con exito: " << endl;
		ListaPer->Buscar(32145678)->cPersona::ListarPersonas();
		cout << endl;

	}
	else cout << "No se pudo encontrar la persona" << endl; cout << endl;

	//en reservas
	if (ListaReserva->Buscar(99) != nullptr)
	{
		cout << "Reserva encontrada con exito: " << endl;
		ListaReserva->Buscar(99)->cReserva::ImprimirReservas();
		cout << endl;

	}
	else cout << "No se pudo encontrar la Reserva" << endl; cout << endl;

	//en resorts
	if (ListaResort->Buscar("Porfa") != nullptr)
	{
		cout << "Resort encontrado con exito: " << endl;
		ListaResort->Buscar("Potrerillos")->cResort::ListarResorts();
		cout << endl;

	}
	else cout << "No se pudo encontrar el resort" << endl; cout << endl;

}

void Sistema::ProbarQuitar()//pruebo quitar en todas las clases
{
	//en personas
	if (ListaPer->Quitar(41257895) == nullptr)
	{
		cout << "No se pudo quitar la persona" << endl;

	}
	else
	{
		cout << "Persona quitada con exito: " << endl;
		ListaPer->Listar();
		cout << endl;
	}

	//resorts
	if (ListaResort->Quitar("Valle Grande") == nullptr)
	{
		cout << "No se pudo quitar el resort" << endl;

	}
	else
	{
		cout << "Resort quitado con exito: " << endl;
		ListaResort->Listar();
		cout << endl;
	}

	//reservas
	if (ListaReserva->Quitar(55) == nullptr)
	{
		cout << "No se pudo quitar la reserva" << endl;

	}
	else 
	{
		cout << "Reserva quitada con exito: " << endl;
		ListaReserva->Listar();
		cout << endl;
	}
	
}
