#include<iostream>
#include<locale.h>

// determinar comisiones

/*
	Q10 o menos        -  5%
	Q10.01 a Q20.00    - 10%
	Q20.01 en adelante - 15%
*/

using namespace std;

int main(){
	setlocale(LC_CTYPE, "Spanish");
	
	float venta, comision = 0;
	cout << "Ingrese un número: ";
	cin >> venta;
	
	if (venta == 0 || venta < 0) {
		cout << "El vendor no realizó ninguna venta";
	} else if (venta <= 10.00 && venta > 0) {
		cout << "Comisión del 5%";
		comision = venta * 5 / 100;
		cout << "\nQ" << comision;
	}else if (venta >= 10.01 && venta <=20.00) {
		cout << "Comisión del 10%";
		comision = venta * 10 / 100;
		cout << "\nQ" << comision;
	} else {
		cout << "Comisión del 15%";
		comision = venta * 15 / 100;
		cout << "\nQ" << comision;
	}
	
	return 0;
}
