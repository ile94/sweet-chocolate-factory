#ifndef __CLIENTE_H__
#define __CLIENTE_H__

#include "persona.h"

class Cliente{
	private:
		Persona p;
		int idCliente;
		string mail;
	public:
		Cliente();
		//input
		void inizializza_cliente(string _nome, string _cognome, string _nato_il, string _citta);
		void inserisciIdCliente(int cliente_id);
		void inserisciMail(string _mail);
		//output
		Persona get_p();
		int get_id();
		string get_mail();
		void Ordine();	
};

void test_cliente();

#endif
