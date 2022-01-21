#include <iostream> //Libreria || entrada y salida de datos

using namespace std; // para usar el cin y cout de f. facil

int main(){
	int i;
	cout << "Ciclo While - Ascendente 1-10"<<endl;
	// Ciclo While - Ascendente 1-10
	i = 1;
	while(i<=10){ // lo utilizamos cuando no tengamos definido un final
		cout << i << endl;
		i++;
	}
	
	cout << "\n\nCiclo While - Descendente 10-1"<<endl;
	// Ciclo While - Descendente 10-1
	i = 10;
	while(i>=1){
		cout << i << endl;
		i--;
	}
	
	return 0;
}
