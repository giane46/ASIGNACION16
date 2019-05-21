#include <iostream>
using namespace std;

void intercambiar(int *a, int *b) {
	int aAux, bAux;
	bAux = *b;
	aAux = *a;

	//Valores cambiados
	*a = bAux;
	*b = aAux;
}


int main() {
	//Declaramos variables
	int x, y;

	do {
		cout << "Ingrese valor para X e Y, respectivamente: ";
		cin >> x >> y;
	} while (x > y);

	//Declaramos punteros
	int *x1, *y1;

	//Asignamos direccion de memoria
	x1 = &x;
	y1 = &y;

	//Imprimiendo valores iniciales
	cout << "Valor inicial X: " << x << " - Valor inicial Y: " << y << endl;

	//Llamamos a la funcion
	intercambiar(x1, y1);

	//Imprimiendo valores finales
	cout << "Valor final X: " << x << " - Valor final Y: " << y << endl;


	system("pause");
	return 0;
}