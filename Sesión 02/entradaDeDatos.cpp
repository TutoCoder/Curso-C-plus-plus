#include <iostream> //Librer�a para usar entrada y salida de datos
#include <locale.h> // configuraciones locales, la hora, las tildes, lenguaje, moneda

using namespace std; // para usar el cin y cout de forma f�cil

int main(){
	setlocale(LC_CTYPE, "Spanish"); //Para usar tildes y �
	
	int numero1, numero2, suma = 0, resta = 0, multiplicacion = 0, division = 0; // Declaramos la variable
	// Primer n�mero
	cout << "Ingrese un n�mero: ";
	cin >> numero1;
	
	// Segundo n�mero
	cout << "Ingrese otro n�mero: ";
	cin >> numero2;
	
	// Sumamos los dos n�meros ingresados
	suma = numero1 + numero2;
	cout << "Suma: " << suma;
	
	// Restamos los dos n�meros ingresados
	resta = numero1 - numero2;
	cout << "\nResta: " << resta;
	
	// Multiplicamos los numeros ingresados
	multiplicacion = numero1 * numero2;
	cout << "\nMultiplicaci�n: " << multiplicacion;
	
	// Division los numeros ingresados
	division = numero1 / numero2;
	cout << "\nDivisi�n: " << division;
		
	return 0;
}
