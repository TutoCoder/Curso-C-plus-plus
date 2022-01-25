#include<iostream>

using namespace std;

int main(){
	
	int factorUno, final, producto = 0;
	
	cout << "Ingrese el Factor Uno: ";
	cin >> factorUno;
	
	cout << "Ingrese el final de la tabla de multiplicar: ";
	cin >> final;
	
	cout << "\n\nTabla del " << factorUno << endl;
	
	for(int i=1; i<=final; i++){
		producto = factorUno * i;
		cout << factorUno << " X "<< i << " = " << producto << endl;	
	}
	
	return 0;
}
