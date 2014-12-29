#ifndef __PERSONA_H__
#define __PERSONA_H__

#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

class Persona{
	private:
		string nome;
		string cognome;
		string nato_il;
		string citta;
	public:
		Persona();
		void inserisciNome(string _nome);
		void modificaNome(string _nome);
		string get_nome();
		void inserisciCognome(string _cognome);
		void modificaCognome(string _cognome);
		string get_cognome();
		void inserisciData(string _data);			//array di int[8] da implementare
		void modificaData(string _data);
		string get_data();
};

void test_persona();


#endif
