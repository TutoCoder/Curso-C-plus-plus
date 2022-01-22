/*sumar 3 valores almacenados en un arreglo, 
tome en cuenta pedir los valores al usuario*/

#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_CTYPE, "Spanish");
	
	int numeros[3], suma = 0;
	
	for(int i=0; i<=3-1; i++){
		cout << "Ingrese el #"<<i+1<<": ";
		cin >> numeros[i];
	}
	
	//suma = numeros[0] + numeros[1] + numeros[2];
	// 8 10 1  // suma 19
	for(int i=0; i<=3-1; i++){ // 0, 1, 2
		suma = suma + numeros[i];
		//suma += numeros[i];
	}
	
	cout << "Numero 1: " << numeros[0]<<endl;
	cout << "Numero 2: " << numeros[1]<<endl;
	cout << "Numero 3: " << numeros[2]<<endl;
	
	cout << endl << endl << "La suma es: " << suma;
	cout << endl << "Multiplicacion " << numeros[0] * numeros[1];
	
	
	return 0;
}
