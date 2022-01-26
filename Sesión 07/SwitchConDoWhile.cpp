#include<iostream>
#include<locale.h>

using namespace std;

int main(){
	setlocale(LC_CTYPE, "Spanish");
	int opcion, repetir;
	
	
	do{	
		
		cout << "---------------------" << endl;
		cout << "|        Menú       |" << endl;
		cout << "---------------------" << endl;
		cout << "1. Suma" << endl;
		cout << "2. Resta" << endl;
		cout << "3. Saludo" << endl << endl;
				
		cout << "Ingrese el número de opción: ";
		cin >> opcion;
				
		switch(opcion){
			case 1:
				cout << "Suma";
				break;
			case 2:
				cout << "Resta";
				break;
			case 3:
				cout << "Hola Mundo";
				break;
			default:
				cout << "Opción Inválida. Intente de nuevo.";
				break;
		}
		
		cout << "\n\n¿Desea volver al menu?, presione 1 para continuar o presione cualquier otro numero para salir: ";
		cin >> repetir;
		
	}while(repetir == 1);
	
		
	return 0;
}
