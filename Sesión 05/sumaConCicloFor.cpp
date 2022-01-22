/*sumar 3 valores utilizando ciclos*/

#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_CTYPE, "Spanish");
	
	int numero, suma = 0;
	// 8 10 1  // suma 19
	for(int i=1; i<=3; i++){ // 1, 2, 3
		cout << "Ingrese el #"<<i<<": ";
		cin >> numero;
		suma = suma + numero;
	}
	
	cout << "Resultado despues de hacer otra cosa";
	
	cout << "Numero 1: " << numero << endl;
	cout << "Numero 2: " << numero << endl;
	cout << "Numero 3: " << numero << endl;
	
	cout << endl << endl << "La suma es: " << suma;
	
	
	return 0;
}
