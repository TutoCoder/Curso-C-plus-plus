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
			int numero1, numero2;
			case 1:
				int suma;
				
				// pedimos el primer numero al usuario
				cout << "Ingrese el primer número: ";
				cin >> numero1;
				
				// pedimos el segundo numero al usuario
				cout << "Ingrese el segundo número: ";
				cin >> numero2;
				
				// Realizamos la suma y lo almacenamos en la variable suma
				suma = numero1 + numero2;
				
				// Mostramos en pantalla el resultado
				cout << "\nLa suma es: " << suma;
				break;
			case 2:
				int resta;
				
				// pedimos el primer numero al usuario
				cout << "Ingrese el primer numero: ";
				cin >> numero1;
				
				// pedimos el segundo numero al usuario
				cout << "Ingrese el segundo numero: ";
				cin >> numero2;
				
				// Realizamos la resta y lo almacenamos en la variable resta
				resta = numero1 - numero2;
				
				// Mostramos en pantalla el resultado
				cout << "\nLa resta es: " << resta;
				
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
