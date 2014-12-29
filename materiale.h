
#ifndef __MATERIALE_H__
#define __MATERIALE_H__
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

class Materiale {
	private:
		int IDMateriale;
		string tipoMateriale;
	public:
		Materiale();
		Materiale(int _IDM, string tm);
		void inserisciTipoMateriale();
};


#endif
