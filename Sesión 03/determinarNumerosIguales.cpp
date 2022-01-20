#include<iostream>
#include<locale.h>

// que determine si dos numeros son iguales

using namespace std;

int main(){
	setlocale(LC_CTYPE, "Spanish");
	
	int numero1, numero2;
	cout << "Ingrese un número: ";
	cin >> numero1;
	
	cout << "Ingrese otro número: ";
	cin >> numero2;
	
	if(numero1 == numero2){
		cout << "Los números ingresados son iguales";
		
		if(numero1 > 10){
			cout << "\nEl número es mayor a diez";
		}
	}else{
		cout << "Los números son diferentes.";
	}
	
	return 0;
}
