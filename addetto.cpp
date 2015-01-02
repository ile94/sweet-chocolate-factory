#include "addetto.h"
#include <fstream>

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

Cliente* Addetto::inserisciCliente(){
	Cliente* cliente  = new Cliente();
	string temp1, temp2; //si crea temporaneamente le variabili IDProdotto e Nome
	                     //queste variabili vengono distrutte subito
	cout << "Inserire ID cliente : ";
		cin >> temp1;
	cout << endl;
	
	cliente->inizializza_cliente();
	
	(this)->map_cliente.insert ( pair <string, Cliente> (temp1,*cliente));
            	
    ofstream outfile;
    outfile.open("clienti.csv",ios::app);
    outfile << temp1 <<";" <<  temp2 <<endl;
    outfile.close();
    return cliente; //ritorna un puntatore ad un Tipoprodotto
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
/*
	Cliente* cliente;
	cliente=cliente->inserisciCliente();
	cliente->stampa(cliente);
*/	
}

void start(){
	
	Addetto a;
	
	int m=0;
	cout<<"*** SWEET CHOCOLATE FACTORY ***"<<endl;
	
	do{
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
	}while(m!=0);
	
	do{
		switch(m){
			case 1:{
				a.stampaRegistroClienti();
			}break;
			case 2:{
				test_prodotto();
				
				ifstream file ( "prodotti.csv" );
    			ifstream is;
    			char linea[100];
    			is.open("prodotti.csv", ios::in); 
    
    			is.getline(linea, 100); //leggere la linea id intestazione
    			string value;
    			while ( file.good() )
    			{
          			getline ( file, value, ',' ); // read a string until next comma: http://www.cplusplus.com/reference/string/getline/
          			cout << string( value, 1, value.length()-2 ); // display value removing the first and the last character from it
    			}
    	
    			is.close();
			}break;
		}
		cout<<endl;
		cout<<"menu:"<<endl;
		cout<<"1) Visualizza registro clienti"<<endl;
		cout<<"2) Lista prodotti"<<endl;
		cout<<"Inserire valore: ";
		cin>>m;
	}while(m!=0);
}
