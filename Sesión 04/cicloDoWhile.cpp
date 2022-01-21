#include <iostream> //Libreria || entrada y salida de datos

using namespace std; // para usar el cin y cout de f. facil

int main(){
	int i;
	cout << "Ciclo Do While - Ascendente 1-10"<<endl;
	// Ciclo Do While - Ascendente 1-10
	i = 1;
	do{
		cout << i << endl;
		i++;
	}while(i<=10);
	
	cout << "\n\nCiclo Do While - Descendente 10-1"<<endl;
	// Ciclo Do While - Descendente 10-1
	i = 10;
	do{
		cout << i << endl;
		i--;
	}while(i>=1);
	
	return 0;
}
