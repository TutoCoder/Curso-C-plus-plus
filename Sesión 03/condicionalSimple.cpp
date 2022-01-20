#include<iostream>
#include<locale.h>

using namespace std;

int main(){
	setlocale(LC_CTYPE, "Spanish");
	
	int numero1;
	cout << "Ingrese un número: ";
	cin >> numero1;
	
	if(numero1 == 5){
		cout << "El número igresado es 5.";
	}
	
	return 0;
}
