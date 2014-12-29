
#ifndef __MAGAZZINO_H__
#define __MAGAZZINO_H__
#include <cstdlib>
#include <iostream>
using namespace std;


class Magazzino {
	private:
		int IDProdotto;
		int quantitaDisponibile;
	public:
		Magazzino();
		Magazzino(int _IDP, int qd);
		void inserisciProdotto();
		void rimuoviProdotto();
		void inserisciQuantita();
		void modificaQuantita();
};

#endif
