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

//metodo di test
void test_persona(){
	cout<<"TEST PERSONA"<<endl;
	
	Persona p;
	
	//verifica inserisci nome
	p.inserisciNome("mario");
	if(p.get_nome().compare("mario")==0){
		cout<<"nome: mario = "<< p.get_nome()<<" --> ok"<<endl; 
	}else{
		cout<<"nome: mario = "<< p.get_nome()<<" --> -Errore-"<<endl; 
	}
	
	//verifica modifica nome
	p.inserisciNome("luca");
	if(p.get_nome().compare("luca")==0){
		cout<<"nome: luca"<< " = "<<p.get_nome()<<" --> ok"<<endl; 
	}else{
		cout<<"nome: luca"<<" = "<<p.get_nome()<<" --> -Errore-"<<endl; 
	}
	
	//verifica inserisci cognome
	p.inserisciCognome("rossi");
	if(p.get_cognome().compare("rossi")==0){
		cout<<"cognome: rossi = "<<p.get_cognome()<<" --> ok"<<endl; 
	}else{
		cout<<"cognome: rossi = "<<p.get_cognome()<<" --> -Errore-"<<endl; 
	}
	
	//verifica modifica cognome
	p.inserisciCognome("bianchi");
	if(p.get_cognome().compare("bianchi")==0){
		cout<<"cognome: bianchi = "<<p.get_cognome()<<" --> ok"<<endl; 
	}else{
		cout<<"cognome: bianchi = "<<p.get_cognome()<<" --> -Errore-"<<endl; 
	}
	
	//verifica inserisci data
	p.inserisciData("01/01/2000");
	if(p.get_data().compare("01/01/2000")==0){
		cout<<"data: 01/01/2000 = "<<p.get_data()<<" --> ok"<<endl; 
	}else{
		cout<<"data: 01/01/2000 = "<<p.get_data()<<" --> -Errore-"<<endl; 
	}
	
	//verifica modifica data
	p.inserisciData("01/01/2000");
	if(p.get_data().compare("01/01/2000")==0){
		cout<<"data: 01/01/2000 = "<<p.get_data()<<" --> ok"<<endl; 
	}else{
		cout<<"data: 01/01/2000 = "<<p.get_data()<<" --> -Errore-"<<endl; 
	}
}
