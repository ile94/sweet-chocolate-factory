#include "tipoprodotto.h"

		TipoProdotto::TipoProdotto() {
			IDProdotto = " ";
			nome = " ";
		}
		//costruttore specifico
		TipoProdotto::TipoProdotto(string _IDProdotto, string _nome) {
			IDProdotto = _IDProdotto;
			nome = _nome;
		}
		
		void TipoProdotto::get_idprodotto() {
			return IDProdotto;
		}
		
		void TipoProdotto::get_nome() {
			return nome;
		}
		
		void TipoProdotto::inserisciProdotto() {
			cout << "Inserire ID prodotto : ";
			cin >> IDProdotto;
			cout << endl;
			cout << "Inserire nome prodotto : ";
			cin >> nome;
			cout << endl;
			tp.insert (pair<string, string>(IDProdotto, nome));
		}
