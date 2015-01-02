#include "cliente.h"

Cliente::Cliente(){
	idCliente="nome_cognome";
	mail="";
}

string Cliente::get_id(){
	return idCliente;
}

string Cliente::get_mail(){
	return mail;
}

void Cliente::inserisciIdCliente(string cliente_id){
	idCliente=cliente_id;
}
	
void Cliente::inserisciMail(string _mail){
	mail=_mail;
}

void Cliente::Ordine(){
	
}

void Cliente::inizializza_cliente(){
	string nome, cognome, nato_il, citta;
	
	cout<<"Inserire il nome: ";
		cin>>nome;
	cout<<"Inserire il cognome: ";
		cin>>cognome;
	cout<<"Inserire la data di nascita: ";
		cin>>nato_il;
	cout<<"Inserire la citta: ";
		cin>>citta;
	p.inizializza(nome, cognome, nato_il, citta);
}

Persona Cliente::get_p(){
	return p;
}

//test
void test_cliente(){
	cout<<"TEST CLIENTE"<<endl;
	
	Cliente c;
	
}

