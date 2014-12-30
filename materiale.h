#ifndef __MATERIALE_H__
#define __MATERIALE_H__
#include <cstdlib>
#include <iostream>
#include <string>
#include <map>

using namespace std;

class Materiale {
	private:
		int IDMateriale;
		string tipoMateriale;
		map<string, string> mp;
		
		
	public:
		Materiale();
		Materiale(int _IDM, string tm);
		void inserisciTipoMateriale();
		
		//friend ostream& operator<<(ostream& os, const Materiale&);
};

void test_Materiale();

#endif
