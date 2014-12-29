
#include "magazzino.h"

Magazzino::Magazzino() {
	IDProdotto = 0;
	quantitaDisponibile = 0;	
}

Magazzino::Magazzino(int _IDP, int qd) {
	IDProdotto = _IDP;
	quantitaDisponibile = qd;	
}
