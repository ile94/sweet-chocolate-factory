#include "tipoprodotto.h"
#include <map>
#include <string>
#include <fstream>



		TipoProdotto::TipoProdotto() {
			IDProdotto = " ";
			nome = " ";
		}
		//costruttore specifico
		TipoProdotto::TipoProdotto(string _IDProdotto, string _nome) {
			IDProdotto = _IDProdotto;
			nome = _nome;
		}
		
		string TipoProdotto:: get_idprodotto() {
			return IDProdotto;
        }
		
		string TipoProdotto:: get_nome() {
			return nome;
        }
		
	   TipoProdotto* TipoProdotto::inserisciProdotto() {
                     
			TipoProdotto* prodotto  = new TipoProdotto();
			string temp1, temp2; //si crea temporaneamente le variabili IDProdotto e Nome
			                     //queste variabili vengono distrutte subito
			cout << "Inserire ID prodotto : ";
			cin >> temp1;
			cout << endl;
			cout << "Inserire nome prodotto : ";
			cin >> temp2;
			cout << endl;
			prodotto->tp.insert ( pair <string, string> (temp1, temp2));
            	
            
            ofstream outfile;
            outfile.open("prodotti.csv",ios::app);
            outfile << temp1 <<";" <<  temp2 <<endl;
            outfile.close();
            return prodotto; //ritorna un puntatore ad un Tipoprodotto
		}
		
		void TipoProdotto::stampa(TipoProdotto* prodotto) {
			map <string, string >:: iterator mii;
			for (mii = prodotto->tp.begin(); mii != prodotto->tp.end(); mii++ ) {
			cout << "ID : " << mii->first << " nome : " << mii->second << endl;
			}
		}
		
		void test_prodotto() {
			cout << "test prodotto " << endl;
			TipoProdotto* tipoprod;
			tipoprod=tipoprod->inserisciProdotto();
			tipoprod->stampa(tipoprod);
		}
		
		
