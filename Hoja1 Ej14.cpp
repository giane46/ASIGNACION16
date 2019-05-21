#include <iostream>
using namespace std;

void intercambiar(int *a, int *b) {
	int aAux, bAux;
	aAux = *a; //aAux = x
	bAux = *b; //bAux = y

	*a = bAux; //x = bAux
	*b = aAux; //y = aAux
}

int main() {
	int x;
	int y;

	cout << "Ingrese valor para X: ";
	cin >> x;
	cout << "Ingrese valor para Y: ";
	cin >> y;
	
	//Declarar los punteros
	int *x1, *y1;

	//Asignar la dirección de memoria
	x1 = &x;//x1 = AB001
	y1 = &y;//Y1 = AB002

	//Imprimiendo los valores iniciales
	cout << "Valor inicial X: " << *x1 << " - Valor inicial Y: " << *y1 << endl;

	//Llamo a la función
	intercambiar(x1, y1);

	cout << "Valor final X: " << *x1 << " - Valor final Y: " << *y1 << endl;


	system("pause");
	return 0;
}