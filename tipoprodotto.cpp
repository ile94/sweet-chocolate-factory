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
			TipoProdotto* prodotto  = new TipoProdotto();
			cout << "Inserire ID prodotto : ";
			cin >> prodotto->IDProdotto;
			cout << endl;
			cout << "Inserire nome prodotto : ";
			cin >> prodotto->nome;
			cout << endl;
			tp.insert ( pair <string, string> (prodotto->IDProdotto, prodotto->nome));	
		}
		
		void TipoProdotto::stampa() {
			map <string, string >:: iterator mii;
			cout << "ciao" << endl;
			/*for (mii = tp.begin(); mii != tp.end(); mii++ ) {
			cout << "ID : " << mii->first << "nome : " << mii->second << endl;
			}*/
		}
		
		void test_prodotto() {
			cout << "test prodotto " << endl;
			TipoProdotto* tipoprod;
			tipoprod->inserisciProdotto();
			
            tipoprod->stampa();
			
		}
		
		
