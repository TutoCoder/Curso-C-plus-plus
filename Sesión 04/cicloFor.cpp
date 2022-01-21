#include <iostream> //Libreria || entrada y salida de datos

using namespace std; // para usar el cin y cout de f. facil

int main(){
	cout << "Ciclo For - Ascendente 1-10"<<endl;
	// Ciclo For - Ascendente 1-10
	for(int i=1; i<=10; i++){
		cout << i << endl;			
	}
	
	cout << "\n\nCiclo For - Descendente 10-1"<<endl;
	// Ciclo For - Descendente 10-1
	for(int i=10; i>=1; i--){
		cout << i << endl;
	}
	
	return 0;
}
