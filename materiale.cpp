
#include "materiale.h"

Materiale :: Materiale() {
	IDMateriale = 0;
	tipoMateriale = " ";
}
		
Materiale::Materiale(int _IDM, string tm) {
	IDMateriale = _IDM;
	tipoMateriale = tm;
}
