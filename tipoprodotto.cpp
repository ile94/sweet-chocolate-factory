#include "tipoprodotto.h"
#include <map>
#include <string>


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
		
		void TipoProdotto::inserisciProdotto() {
			
			cout << "Inserire ID prodotto : ";
			cin >> IDProdotto;
			cout << endl;
			cout << "Inserire nome prodotto : ";
			cin >> nome;
			cout << endl;
			tp.insert ( pair <string, string> (IDProdotto, nome));
			map <string, string >:: iterator mii;
			for (mii = tp.begin(); mii != tp.end(); mii++ ) {
			cout << "ID : " << mii->first << "nome : " << mii->second << endl;
			}
		}
		
		void TipoProdotto::stampa() {
			map <string, string >:: iterator mii;
			for (mii = tp.begin(); mii != tp.end(); mii++ ) {
			cout << "ID : " << mii->first << "nome : " << mii->second << endl;
			}
		}
		
		void test_prodotto() {
			cout << "test prodotto " << endl;
			TipoProdotto tipoprod;
			for (int i=0; i<5; i++) {
				
				tipoprod.inserisciProdotto();
				//tipoprod.get_prodotto();
			}
		//tipoprod.get_prodotto();
			
		}
		
		
