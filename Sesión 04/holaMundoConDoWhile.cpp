#include <iostream> //Libreria || entrada y salida de datos

using namespace std; // para usar el cin y cout de f. facil

int main(){
	int opcion = 0;
	
	do{
		cout << "1. Mostrar un mensaje en pantalla";
		cout << "\n2. Finalizar el programa";
		cout << "\nIngrese el # de opcion: ";
		cin >> opcion;
		if(opcion == 1){	
			cout << "mensaje 1" << endl;
		}
		
		if(opcion == 2){	
			cout << "mensaje 2" << endl;
		}
		
		if(opcion == 3){	
			cout << "mensaje 3" << endl;
		}
		
		if(opcion == 4){	
			cout << "mensaje 4" << endl;
		}
		
		if(opcion == 5){	
			cout << "mensaje 5" << endl;
		}
		
	}while(opcion >= 1 && opcion <=5);
	
	return 0;
}
