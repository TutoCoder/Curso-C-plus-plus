#include<iostream>
#include<locale.h>

// determinar comisiones de 3 ventas

/*
	Q10 o menos        -  5%
	Q10.01 a Q20.00    - 10%
	Q20.01 en adelante - 15%
*/

using namespace std;

int main(){
	setlocale(LC_CTYPE, "Spanish");
	float venta, comision = 0;
	
	for(int i=1; i<=3; i++){
		cout << "Ingrese el valor de la venta #" << i << ": Q";
		cin >> venta;//100
		
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
			comision = venta * 15 / 100;//Q15
			cout << "\nQ" << comision;
		}
		
		cout << endl << endl;
	}
	
	return 0;
}
