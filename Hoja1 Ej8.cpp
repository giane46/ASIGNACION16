#include <iostream>
using namespace std;

void esBisiesto(int anio) {
	if (anio % 4 == 0 && (anio % 100 != 0 || anio % 400 == 0)) {
		cout << "El anio " << anio << " es bisiesto." << endl;
	}
	else {
		cout << "El anio " << anio << " no es bisiesto." << endl;
	}
}

int main() {
	int anio;

	cout << "Ingrese el anio: ";
	cin >> anio;

	esBisiesto(anio);

	system("pause");
	return 0;
}