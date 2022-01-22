#include<iostream> // Librería, entrada y salida de datos
#include<locale.h> // Liberería, para usar tildes

using namespace std; //Para usar el cin y cout de forma fácil

int main(){
	setlocale(LC_CTYPE, "Spanish");
	
	int numeros[5] = {10,20,30,40,50};
	
	string dias[7];
	dias[0] = "Lunes";
	dias[1] = "Martes";
	dias[2] = "Miércoles";
	dias[3] = "Jueves";
	dias[4] = "Viernes";
	dias[5] = "Sábado";
	dias[6] = "Domingo";
	
	cout << "--------- Numeros ---------" << endl;
	for(int i=0; i<=4; i++){ // 0 1 2 3 4
		cout << numeros[i] << endl;
	}
	
	cout << "--------- Días de la semana ---------" << endl;
	for(int i=0; i<=6; i++){ // 0 1 2 3 4 5 6
		cout << dias[i] << endl;
	}
	
	dias[6] = "Otro nombre";
	cout << endl << dias[6];
	
	cout << "\n--------- Días de la semana ---------" << endl;
	for(int i=0; i<=6; i++){ // 0 1 2 3 4 5 6
		cout << dias[i] << endl;
	}
	
	return 0;
}
