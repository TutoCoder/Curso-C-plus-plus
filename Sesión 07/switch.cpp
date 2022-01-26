#include<iostream>
#include<locale.h>

using namespace std;

int main(){
	setlocale(LC_CTYPE, "Spanish");
	
	int opcion;
	
	cout << "Ingrese el número de opción: ";
	cin >> opcion;	
	
	switch(opcion){
		case 1:
			cout << "Opcion 1";
			break;
		case 2:
			cout << "Opcion 2";
			break;
		case 3:
			cout << "Opcion 3";
			break;
		default:
			cout << "Opción Inválida. Intente de nuevo.";
			break;
	}
		
	return 0;
}
