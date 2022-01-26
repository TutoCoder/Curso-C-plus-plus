#include<iostream>
#include<locale.h>

using namespace std;

int main(){
	setlocale(LC_CTYPE, "Spanish");
	
	char opcion;
	
	cout << "Ingrese el número de opción: ";
	cin >> opcion;	
	
	switch(opcion){
		case 'a':
			cout << "Opcion a";
			break;
		case 'b':
			cout << "Opcion b";
			break;
		case 'c':
			cout << "Opcion c";
			break;
		default:
			cout << "Opción Inválida. Intente de nuevo.";
			break;
	}
		
	return 0;
}
