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
		void inizializza(string _nome, string _cognome, string _nato_il, string _citta);
		void inserisciNome(string _nome);
		string get_nome();
		void inserisciCognome(string _cognome);
		string get_cognome();
		void inserisciData(string _data);			//array di int[8] da implementare
		string get_data();
		void inserisciCitta(string _citta);			//array di int[8] da implementare
		string get_citta();
};

void test_persona();

#endif
