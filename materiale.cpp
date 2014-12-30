#include "materiale.h"
#include <map>
#include <string>


Materiale :: Materiale() {
    map<int, string> m;
	IDMateriale = 0;
	tipoMateriale = " ";
	m.insert(pair<int, string> (IDMateriale, string(" ")));
}
		
Materiale::Materiale(int _IDM, string tm) {
	IDMateriale = _IDM;
	tipoMateriale = tm;}

//ostream& operator<<(ostream& os, const Materiale&){
         //if ()}

void test_Materiale(){
     Materiale m;
     //m.Materiale();
     //cout<< m.IDMateriale << endl;
}
