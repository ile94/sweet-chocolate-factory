#ifndef __ORDINE_H__
#define __ORDINE_H__
#include <cstdlib>
#include <iostream>
using namespace std;

class Ordine {
	private:
		int IDRigaOrdine;
		int IDOrdineVendita;
	public:
		//costruttore di default
		Ordine();	
		//costruttore specifico
		Ordine(int _IDR, int _IDO);
		//void inserisciRigaOrdine(); metodi da implementare
		//void inserisciOrdineVendita();
};


#endif
