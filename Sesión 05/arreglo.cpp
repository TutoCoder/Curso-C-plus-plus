#include<iostream> // Librer�a, entrada y salida de datos
#include<locale.h> // Liberer�a, para usar tildes

using namespace std; //Para usar el cin y cout de forma f�cil

int main(){
	setlocale(LC_CTYPE, "Spanish");
	
	int numeros[5] = {10,20,30,40,50};
	
	string dias[7];
	dias[0] = "Lunes";
	dias[1] = "Martes";
	dias[2] = "Mi�rcoles";
	dias[3] = "Jueves";
	dias[4] = "Viernes";
	dias[5] = "S�bado";
	dias[6] = "Domingo";
	
	cout << "--------- Numeros ---------" << endl;
	for(int i=0; i<=4; i++){ // 0 1 2 3 4
		cout << numeros[i] << endl;
	}
	
	cout << "--------- D�as de la semana ---------" << endl;
	for(int i=0; i<=6; i++){ // 0 1 2 3 4 5 6
		cout << dias[i] << endl;
	}
	
	dias[6] = "Otro nombre";
	cout << endl << dias[6];
	
	cout << "\n--------- D�as de la semana ---------" << endl;
	for(int i=0; i<=6; i++){ // 0 1 2 3 4 5 6
		cout << dias[i] << endl;
	}
	
	return 0;
}
