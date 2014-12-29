#include "cliente.h"

Cliente::Cliente(){
	idCliente=0;
	mail="";
}

string Cliente::cliente_nome(){
	return p.get_nome();
}

string Cliente::cliente_cognome(){
	return p.get_cognome();	
}

string Cliente::cliente_data(){
	return p.get_data();
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

//test
void test_cliente(){
	cout<<"TEST CLIENTE"<<endl;
	
	Cliente c;
	
	//test inserisci cliente
	c.inserisciIdCliente(2);
	if(c.get_id()==2){
		cout<<"id_cliente: "<<c.get_id()<<" --> ok"<<endl; 
	}else{
		cout<<"id_cliente: "<<c.get_id()<<" --> -Errore-"<<endl; 
	}
	
	//test mail
	c.inserisciMail("nome.cognome@gmail.com");
	if(c.get_mail().compare("nome.cognome@gmail.com")==0){
		cout<<"mail: "<<"nome.cognome@gmail.com"<<" = "<<c.get_mail()<<" --> ok"<<endl; 
	}else{
		cout<<"mail: "<<c.get_mail()<<" --> -Errore-"<<endl; 
	}
}
