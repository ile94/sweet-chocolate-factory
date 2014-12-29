#include "addetto.h"

Addetto::Addetto(){
	username="user1";
	password="pass1";
}

void Addetto::inizializza_addetto(string _nome, string _cognome, string _nato_il, string _citta){
	p.inizializza(_nome, _cognome, _nato_il, _citta);
}

bool Addetto::login(string _username, string _password){
	return ((username==_username)&&(password==_password));
}

void Addetto::inserisciCliente(Cliente c){
	map_cliente.insert(pair<int,Cliente>(c.get_id(),c));
}

bool Addetto::verificaMagazzino(){
	
}

void Addetto::inserisciOrdine(Cliente c, Ordine o){
	map_ordine.insert(pair<int,Ordine>(c.get_id(),o));
}

void Addetto::inviaOrdineProduzione(Ordine o){
	
}

void Addetto::inviaOrdineFornitore(Ordine o){
	
}

//test
void test_addetto(){
	cout<<"TEST ADDETTO"<<endl;
	
}
