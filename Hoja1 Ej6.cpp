#include <iostream>
using namespace std;


double dolaresSoles(double &soles, double &dolares, double cambio) {
	soles = dolares*cambio;

	return soles;
}


double solesDolares(double soles, double dolares, double cambio) {
	dolares = soles / cambio;

	return dolares;
}

int main() {
	double soles, dolares, cambio;
	int opcion;
	
	while(1) {
		cout << "¿Quiere dolares o soles? (1. Soles  2. Dolares  3. Fin)" << endl;
		cin >> opcion;

		if (opcion == 3) {
			break;
		}

		switch (opcion) {
		case 1:
			cout << "Ingrese la cantidad de dolares a vender: ";
			cin >> dolares;
			cambio = 3.3;
			soles = dolaresSoles(soles, dolares, cambio);
			cout << "El monto en soles es: " << soles << endl;
			break;
		case 2:
			cout << "Ingrese la cantidad de soles: ";
			cin >> soles;
			cambio = 3.34;
			dolares = solesDolares(soles, dolares, cambio);
			cout << "El monto en dolares es: " << dolares << endl;
			break;
		case 3: break;
		default:
			cout << "ERROR." << endl;
			break;
		}
	}

	system("pause");
	return 0;
}