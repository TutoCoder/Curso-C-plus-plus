#include <iostream> //Librería para usar entrada y salida de datos
#include <locale.h> // configuraciones locales, la hora, las tildes, lenguaje, moneda

using namespace std; // para usar el cin y cout de forma fácil

int main(){
	setlocale(LC_CTYPE, "Spanish"); //Para usar tildes y ñ
	
	int numero1, numero2, suma = 0, resta = 0, multiplicacion = 0, division = 0; // Declaramos la variable
	// Primer número
	cout << "Ingrese un número: ";
	cin >> numero1;
	
	// Segundo número
	cout << "Ingrese otro número: ";
	cin >> numero2;
	
	// Sumamos los dos números ingresados
	suma = numero1 + numero2;
	cout << "Suma: " << suma;
	
	// Restamos los dos números ingresados
	resta = numero1 - numero2;
	cout << "\nResta: " << resta;
	
	// Multiplicamos los numeros ingresados
	multiplicacion = numero1 * numero2;
	cout << "\nMultiplicación: " << multiplicacion;
	
	// Division los numeros ingresados
	division = numero1 / numero2;
	cout << "\nDivisión: " << division;
		
	return 0;
}
