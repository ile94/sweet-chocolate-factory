#include "cliente.h"

Cliente::Cliente(){
	idCliente=0;
	mail="";
}

int Cliente::get_id(){
	return idCliente;
}

string Cliente::get_mail(){
	return mail;
}

void Cliente::inserisciIdCliente(int cliente_id){
	idCliente=cliente_id;
}
	
void Cliente::inserisciMail(string _mail){
	mail=_mail;
}

void Cliente::Ordine(){
	
}

void Cliente::inizializza_cliente(string _nome, string _cognome, string _nato_il, string _citta){
	p.inizializza(_nome, _cognome, _nato_il, _citta);
}

Persona Cliente::get_p(){
	return p;
}

//test
void test_cliente(){
	cout<<"TEST CLIENTE"<<endl;
	
	Cliente c;
	
	//test inizializzazione anagrafica cliente
	c.inizializza_cliente("mario","rossi","10/10/10","Trento");
	if(c.get_p().get_nome().compare("mario")==0){
		cout<<"nome cliente: "<<"mario = "<<c.get_p().get_nome()<<" --> ok"<<endl; 
	}else{
		cout<<"nome cliente: "<<"mario = "<<c.get_p().get_nome()<<" --> Errore"<<endl; 
	}
	if(c.get_p().get_cognome().compare("rossi")==0){
		cout<<"cognome cliente: "<<"rossi = "<<c.get_p().get_cognome()<<" --> ok"<<endl; 
	}else{
		cout<<"cognome cliente: "<<"rossi = "<<c.get_p().get_cognome()<<" --> Errore"<<endl; 
	}
	if(c.get_p().get_data().compare("10/10/10")==0){
		cout<<"nato_il cliente: "<<"10/10/10 = "<<c.get_p().get_data()<<" --> ok"<<endl; 
	}else{
		cout<<"nato_il cliente: "<<"10/10/10 = "<<c.get_p().get_data()<<" --> Errore"<<endl; 
	}
	if(c.get_p().get_citta().compare("Trento")==0){
		cout<<"citta cliente: "<<"Trento = "<<c.get_p().get_citta()<<" --> ok"<<endl; 
	}else{
		cout<<"citta cliente: "<<"Trento = "<<c.get_p().get_citta()<<" --> Errore"<<endl; 
	}
	
	//test inserisci cliente
	c.inserisciIdCliente(2);
	if(c.get_id()==2){
		cout<<"id_cliente: 2 = "<<c.get_id()<<" --> ok"<<endl; 
	}else{
		cout<<"id_cliente: 2 = "<<c.get_id()<<" --> -Errore-"<<endl; 
	}
	
	//test mail
	c.inserisciMail("nome.cognome@gmail.com");
	if(c.get_mail().compare("nome.cognome@gmail.com")==0){
		cout<<"mail: "<<"nome.cognome@gmail.com = "<<c.get_mail()<<" --> ok"<<endl; 
	}else{
		cout<<"mail: "<<"nome.cognome@gmail.com = "<<c.get_mail()<<" --> -Errore-"<<endl; 
	}
}

