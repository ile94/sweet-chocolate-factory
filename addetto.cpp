#include "addetto.h"
#include <fstream>
#include <map>

Addetto::Addetto(){
	username="user1";
	password="pass1";
}

//void Addetto::inizializza_addetto(string _nome, string _cognome, string _nato_il, string _citta){
	//p.inizializza(_nome, _cognome, _nato_il, _citta);
//}

bool Addetto::login(string _username, string _password){
	return ((username==_username)&&(password==_password));
}

/*Cliente* Addetto::inserisciCliente(){
	Cliente* cliente  = new Cliente();
	string temp1, temp2; //si crea temporaneamente le variabili IDProdotto e Nome
	                     //queste variabili vengono distrutte subito
	cout << "Inserire ID cliente : ";
	cin >> temp1;
	cout << endl;
	
	//cliente->inizializza_cliente();
	
	//(this)->map_cliente.insert ( pair <string, Cliente> (temp1,*cliente));
            	
    ofstream outfile;
    outfile.open("clienti.csv",ios::app);
    outfile << temp1 <<";" <<  temp2 <<endl;
    outfile.close();
    return cliente; //ritorna un puntatore ad un Tipoprodotto
}*/

bool Addetto::verificaMagazzino(){
	
}

 void Addetto::~TipoProdotto() {
        cout << "Distruttore di TipoProdotto" << endl;
        delete TipoProdotto;
}

/*void Addetto::inserisciOrdine(Cliente c, Ordine o){
	map_ordine.insert(pair<string,Ordine>(c.get_id(),o));
}*/

void Addetto::inviaOrdineProduzione(Ordine o){
	
}

void Addetto::inviaOrdineFornitore(Ordine o){
}

/*void Addetto::stampaRegistroClienti(){
	map<string,Cliente>::iterator msii;
	for(msii=map_cliente.begin();msii!=map_cliente.end();msii++){
		cout<<msii->first<<": "<<msii->second.get_p().get_nome()<<" , "<<msii->second.get_p().get_cognome();
	}
}*/

/*test
void test_addetto(){
	cout<<"TEST ADDETTO"<<endl;

	Cliente* cliente;
	cliente=cliente->inserisciCliente();
	cliente->stampa(cliente);
	
}*/

void start(){
	
	Addetto a;
	Cliente b;
	
	int m=0;
	int n=0;
	int o=0;
	int k=0;
	int x=0;
	cout<<"*** SWEET CHOCOLATE FACTORY ***"<<endl;
	
	while(m==0){
          cout<<"Login addetto"<<endl;
          string username, password;
          cout<<"inserire username: ";
          cin>>username;
          cout<<"inserire password: ";
          cin>>password;
          if(a.login(username,password)){
          cout<<"login effettuato"<<endl;
               m=1;
               system ("CLS");
          }else{
                cout<<"username e/o password non sono stati inseriti correttamente"<<endl;} 
          }
	
	
	cout<<"menu:"<<endl;
	cout<<"1) Registra ordine"<<endl;
	cout<<"2) Verifica ordini"<<endl;
	cout<<"3) Verifica magazzino"<<endl;
	cout<<"4) Registra ordini fornitori"<<endl;
	cout<<"5) Esegui statistiche"<<endl;
	cout<<"6) Aggiungi prodotto"<<endl;
	cout<<"7) Aggiungi materiale"<< endl;
	cout<<"0) Torna alla pagina precedente" << endl;
	cout<<"Inserire valore: ";
	cin>>m;
	system ("CLS");
	do{
		switch(m){
            cout << "10) Apri menu" << endl;
            case 10: {
           	     cout<<"menu:"<<endl;
	             cout<<"1) Registra ordine"<<endl;
	             cout<<"2) Verifica ordini"<<endl;
	             cout<<"3) Verifica magazzino"<<endl;
	             cout<<"4) Registra ordini fornitori"<<endl;
                 cout<<"5) Esegui statistiche"<<endl;
            	 cout<<"6) Lista prodotti"<<endl;
	             cout<<"7) Aggiungi prodotto"<<endl;
                 cout<<"8) Aggiungi materiale"<< endl;
	             //cout<<"0) Torna alla pagina precedente" << endl;
	             cout<<"Inserire valore: ";
	             cin>>m;
	             system ("CLS");
            }
			case 1:{
                 cout << endl;
                 cout<< " ---- REGISTRA ORDINE ----" << endl;
                 cout<< "1) Visualizza lista prodotti" << endl;
				 cout<< "2) Visualizza lista materiali" << endl;
				 cout<< "3) Visualizza lista clienti" << endl;
				 cout<< "4) Inserisci nuovo cliente" << endl;
				 cout<< "5) Torna al menu' principale" << endl;
				 cin>>n;
				switch(n){
                    case 1:{ 
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
                        system ("CLS");
                               
                    case 2:{
                        ifstream file ( "materiali.csv" );
                        ifstream is;
                        char linea[100];
                        is.open("materiali.csv", ios::in);    
                        is.getline(linea, 100); //leggere la linea id intestazione
                        string value;
                        while ( file.good()){
                               getline ( file, value, ',' ); // read a string until next comma: http://www.cplusplus.com/reference/string/getline/
                               cout << string( value, 1, value.length()-2 ); // display value removing the first and the last character from it
                        }    
                        is.close();
                        
                    }break;
                               
                    case 3:{
                        ifstream file ( "clienti.csv" );//apertura del file
                        ifstream is;
                        char linea[100];
                        is.open("clienti.csv", ios::in);     
                        is.getline(linea, 100); //leggere la linea id intestazione
                        string value;
                        while ( file.good() ){
                            getline ( file, value, ',' ); // read a string until next comma: http://www.cplusplus.com/reference/string/getline/
                            cout << string( value, 1, value.length()-2 ); // display value removing the first and the last character from it
                        }                                   
                        is.close(); 
                                                                                            
                    }break;
                                
                    case 4: {
                        cout << "1) Inserisci nuovo cliente" << endl;
                        cout << "2) Ritorna al menu' predecedente" << endl;
                        cin >> k;
                        switch(k){
                          case 1:{
                               Cliente* cl;
			                   cl = cl->inserisci_cliente();
			                   cl->stampa(cl);
			                   
                          }break;
                         case 2:{
                              m=10;
                              
                         }break;
                         system ("CLS");
                        
                    
                    }
                               
                    case 5:{
                        m=10;
                        system ("CLS");
                    }break;
				
                }
				
			}break;
			
			case 2:{


			}break;
			
			case 6:{
                 cout << "1) Inserisci nuovo prodotto" << endl;
                 cout << "2) Ritorna al menu' predecedente" << endl;
                 cin >> o;
                 switch(o){
                          case 1:{
                               TipoProdotto* tipoprod;
			                   tipoprod=tipoprod->inserisciProdotto();
			                   tipoprod->stampa(tipoprod);
                               }break;
                         case 2:{
                              m=10;
                              
                         }break;
                         system ("CLS");
                  }
            }break;
            
            case 7:{
                 cout << "1) Inserisci nuovo materiale" << endl;
                 cout << "2) Ritorna al menu' predecedente" << endl;
                 cin >> x;
                 switch(x){
                     case 1:{
                        Materiale* tipomat;
                        tipomat=tipomat->inserisciTipoMateriale();
                        tipomat->stampa(tipomat);
                     }break;
                     
                     case 2:{
                         m=10;
                     }break;
                 }

            }break;
            system ("CLS");
		}	
	}
}
while(m!=0);
}


