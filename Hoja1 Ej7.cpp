#include <iostream>
using namespace std;

int invertir(int numero, int numInvertido) {
	cout << "El numero invertido es: ";

	while (numero >= 10) {
		numInvertido = numero % 10;
		cout << numInvertido;
		numero = numero / 10;
	}
	cout << numero << endl;

	return numInvertido;
}

int main() {
	int numero;
	int numInvertido = 0;

	do {
		cout << "Ingrese un numero de por lo menos 4 digitos: ";
		cin >> numero;
	} while (numero < 1000);

	cout << endl << "El numero ingresado es: " << numero << endl;

	numInvertido = invertir(numero, numInvertido);
	
	system("pause");
	return 0;
}