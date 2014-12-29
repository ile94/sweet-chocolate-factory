#include "tipoprodotto.h"

		TipoProdotto::TipoProdotto() {
			IDProdotto = 0;
			nome = " ";
		}
		//costruttore specifico
		TipoProdotto::TipoProdotto(int _IDProdotto, string _nome) {
			IDProdotto = _IDProdotto;
			nome = _nome;
		}
