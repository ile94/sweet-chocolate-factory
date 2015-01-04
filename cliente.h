#ifndef __CLIENTE_H__
#define __CLIENTE_H__

#include "persona.h"
#include <map>

class Cliente{
	private:
		Persona* p;
		string idCliente;
		map<string,Persona*> mci;
		map<string, Persona*>::iterator pos;
        
	public:
		Cliente();
		Cliente(string _ID);
		string get_id();
		Cliente* inserisci_cliente();	
		bool trova_cliente(string nome_cognome);
		void stampa(Cliente* cl); //stampa solo il cliente appena creato
		void stampa_tutti_clienti();
		string get_map();
};

void test_cliente();

#endif
