#include<iostream>
#include<locale.h>

using namespace std;

int main(){
	setlocale(LC_CTYPE, "Spanish");
	
	int numero1;
	cout << "Ingrese un n�mero: ";
	cin >> numero1;
	
	if(numero1 == 5){
		cout << "El n�mero igresado es 5.";
	}else{
		cout << "El n�mero ingresado es diferente de 5.";
	}
	
	return 0;
}
