#include "Tester.h"
using namespace std;

bool prueba(){

	return false;
}


int main(){

	Tester examinador;

	examinador.hacerPrueba(prueba, "Desapilar");

	examinador.hacerPrueba(prueba, "Desapilar");

	examinador.veredicto();


	try{
		examinador.assert(true);
	}

	catch(string &e){

		cout<< e <<endl;
	}
	return 0;
}

