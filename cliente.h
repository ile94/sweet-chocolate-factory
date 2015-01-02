#ifndef __CLIENTE_H__
#define __CLIENTE_H__

#include "persona.h"

class Cliente{
	private:
		Persona p;
		string idCliente;
		string mail;
	public:
		Cliente();
		//input
		void inizializza_cliente();
		void inserisciIdCliente(string cliente_id);
		void inserisciMail(string _mail);
		//output
		Persona get_p();
		string get_id();
		string get_mail();
		void Ordine();	
};

void test_cliente();

#endif
