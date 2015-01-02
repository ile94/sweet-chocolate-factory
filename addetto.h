#ifndef __ADDETTO_H__
#define __ADDETTO_H__

#include <map>

#include "persona.h"
#include "addetto.h"
#include "cliente.h"
#include "ordine.h"
#include "tipoprodotto.h"

class Addetto{
	private:
		Persona p;
		string username;
		string password;
		map<string,Cliente> map_cliente;
		map<string,Ordine> map_ordine;		//da verificare map di map
	public:
		Addetto();
		//input
		void inizializza_addetto(string _nome, string _cognome, string _nato_il, string _citta);
		//output
		bool login(string _username, string _password);
		Cliente* inserisciCliente();
		bool verificaMagazzino();
		void inserisciOrdine(Cliente c, Ordine o);
		void inviaOrdineProduzione(Ordine o);
		void inviaOrdineFornitore(Ordine o);
		void stampaRegistroClienti();		
};

//unico metodo da richiamare nel main - metodo che avvia il programma
void start();

void test_addetto();

#endif
