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
	float ventas[3], comision[3];// 0 => Q50, 1 => Q90, 2 => Q10
	
	for(int i=0; i<=2; i++){// 0, 1, 2
		cout << "Ingrese el valor de la venta #" << i+1 << ": Q";
		cin >> ventas[i];//100
		
		if (ventas[i] == 0 || ventas[i] < 0) {
			cout << "El vendor no realizó ninguna venta";
		} else if (ventas[i] <= 10.00 && ventas[i] > 0) {
			cout << "Comisión del 5%";
			comision[i] = ventas[i] * 5 / 100;
			cout << "\nQ" << comision[i];
		}else if (ventas[i] >= 10.01 && ventas[i] <=20.00) {
			cout << "Comisión del 10%";
			comision[i] = ventas[i] * 10 / 100;
			cout << "\nQ" << comision[i];
		} else {
			cout << "Comisión del 15%";
			comision[i] = ventas[i] * 15 / 100;//Q15
			cout << "\nQ" << comision[i];
		}
		cout << endl << endl;
	}
	
	cout << endl << endl;
	cout << "---------------------------------" << endl; // 40, 20, 30
	cout << "|            Resumen            |" << endl;
	cout << "---------------------------------" << endl;
	cout << "|    Ventas    |    Comisión    |" << endl;
	cout << "|Venta #1: Q" << ventas[0] << " |    " << comision[0] << "           |" <<endl;
	cout << "|Venta #2: Q" << ventas[1] << " |    " << comision[1] << "           |" << endl;
	cout << "|Venta #3: Q" << ventas[2] << " |    " << comision[2] << "         |" << endl;
	cout << "---------------------------------" << endl;
	
	return 0;
}
