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
		string cliente_nome();
		string cliente_cognome();
		string cliente_data();
		void inserisciIdCliente(int cliente_id);
		void inserisciMail(string _mail);
		int get_id();
		string get_mail();
		void Ordine();	
};

void test_cliente();

#endif
