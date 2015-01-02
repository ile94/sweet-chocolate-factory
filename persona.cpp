#include "Persona.h"

Persona::Persona(){
	nome="";
	cognome="";
	nato_il="../../..";
	citta="";
}

void Persona::inserisciNome(string _nome){
	nome=_nome;
}

string Persona::get_nome(){
	return nome;
}

void Persona::inserisciCognome(string _cognome){
	cognome=_cognome;
}

string Persona::get_cognome(){
	return cognome;
}

void Persona::inserisciData(string _data){
	nato_il=_data;
}

string Persona::get_data(){
	return nato_il;
}

void Persona::inserisciCitta(string _citta){
	citta=_citta;
}

string Persona::get_citta(){
	return citta;
}

void Persona::inizializza(string _nome, string _cognome, string _nato_il, string _citta){
	nome=_nome;
	cognome=_cognome;
	nato_il=_nato_il;
	citta=_citta;
}
