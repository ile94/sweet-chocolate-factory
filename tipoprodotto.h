#ifndef __TIPOPRODOTTO_H__
#define __TIPOPRODOTTO_H__
#include <cstdlib>
#include <iostream>
#include <string>
#include <map>

using namespace std;

class TipoProdotto {
	private:
		string IDProdotto;
		string nome; //nome del prodotto
		map <string, string> tp;
	public:
		//costruttore di default e specifico
		TipoProdotto(string _IDProdotto, string _nome);
		TipoProdotto();
		string get_idprodotto();
		string get_nome();
		void stampa(TipoProdotto* prodotto);
		TipoProdotto* inserisciProdotto();	
};

void test_prodotto();

#endif
