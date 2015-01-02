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
	map_cliente.insert(pair<string,Cliente>(c.get_id(),c));
}

bool Addetto::verificaMagazzino(){
	
}

void Addetto::inserisciOrdine(Cliente c, Ordine o){
	map_ordine.insert(pair<string,Ordine>(c.get_id(),o));
}

void Addetto::inviaOrdineProduzione(Ordine o){
	
}

void Addetto::inviaOrdineFornitore(Ordine o){
	
}

void Addetto::stampaRegistroClienti(){
	map<string,Cliente>::iterator msii;
	for(msii=map_cliente.begin();msii!=map_cliente.end();msii++){
		cout<<msii->first<<": "<<msii->second.get_p().get_nome()<<" , "<<msii->second.get_p().get_cognome();
	}
}

//test
void test_addetto(){
	cout<<"TEST ADDETTO"<<endl;
	
}

void start(){
	
	Addetto a;
	
	int m=0;
	cout<<"*** SWEET CHOCOLATE FACTORY ***"<<endl;
	do{
		switch(m){
			case 1:{
				cout<<"Login addetto"<<endl;
				string username, password;
				cout<<"inserire username: ";
					cin>>username;
				cout<<"inserire password: ";
					cin>>password;
				if(a.login(username,password)){
					cout<<"login effettuato"<<endl;
				}else{
					cout<<"username e/o password non sono stati inseriti correttamente"<<endl;
				}
			}break;
			case 2:{
				a.stampaRegistroClienti();
			}break;
			case 3:{
				test_prodotto();
			}break;
		}
		cout<<endl;
		cout<<"menu:"<<endl;
		cout<<"1) Login addetto"<<endl;
		cout<<"2) Visualizza registro clienti"<<endl;
		cout<<"3) Lista prodotti"<<endl;
		cout<<"Inserire valore: ";
		cin>>m;
	}while(m!=0);
}
