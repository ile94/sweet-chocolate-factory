#ifndef __TIPOPRODOTTO_H__
#define __TIPOPRODOTTO_H__
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

class TipoProdotto {
	private:
		int IDProdotto;
		string nome; //nome del prodotto
	public:
		//costruttore di default e specifico
		TipoProdotto(int _IDProdotto, string _nome);
		TipoProdotto();
		void get_idprodotto();
		void get_nome();
		void inserisciProdotto(); 
};


#endif
