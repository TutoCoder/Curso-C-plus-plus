#include<iostream>
#include<locale.h>

// que determine si dos numeros son iguales

using namespace std;

int main(){
	setlocale(LC_CTYPE, "Spanish");
	
	int numero1, numero2;
	cout << "Ingrese un n�mero: ";
	cin >> numero1;
	
	cout << "Ingrese otro n�mero: ";
	cin >> numero2;
	
	if(numero1 == numero2){
		cout << "Los n�meros ingresados son iguales";
		
		if(numero1 > 10){
			cout << "\nEl n�mero es mayor a diez";
		}
	}else{
		cout << "Los n�meros son diferentes.";
	}
	
	return 0;
}
