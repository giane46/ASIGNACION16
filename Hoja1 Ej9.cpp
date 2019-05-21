#include <iostream>
using namespace std;

bool validarFecha(int anio, int mes, int dia) {
	bool bisiesto = 0;
	bool fecha = 0;
	if (anio % 4 == 0 && (anio % 100 != 0 || anio % 400 == 0)) {
		bisiesto = true;
	}

	if (bisiesto == true) {
		if (mes == 2 && (dia >= 1 && dia <= 29)) {
			return true;
			/*cout << "Fecha valida." << endl;*/
		}
		else if (dia >= 1 && dia <= 31) {
			switch (mes) {
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12: return true;
				/*cout << "Fecha valida." << endl;*/
				break;
			default: return false;
				/*cout << "Fecha invalida." << endl;*/
				break;
			}
		}
		else if (dia >= 1 && dia <= 30) {
			switch (mes) {
			case 4:
			case 6:
			case 8:
			case 9:
			case 11: return true;
				/*cout << "Fecha valida." << endl;*/
				break;
			default: return false;
				/*cout << "Fecha invalida." << endl;*/
				break;
			}
		}
		else if (mes == 2 && (dia >= 1 && dia <= 28)) {
			return true;
			/*cout << "Fecha valida." << endl;*/
		}
		else {
			return false;
			/*cout << "Fecha invalida." << endl;*/
		}
	}
	else {
		if (mes == 2 && (dia >= 1 && dia <= 28)) {
			return true;
			/*cout << "Fecha valida." << endl;*/
		}
		else if (dia >= 1 && dia <= 31) {
			switch (mes) {
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12: return true;
				/*cout << "Fecha valida." << endl;*/
				break;
			default: return false;
				/*cout << "Fecha invalida." << endl;*/
				break;
			}
		}
		else if (dia >= 1 && dia <= 30) {
			switch (mes) {
			case 4:
			case 6:
			case 8:
			case 9:
			case 11: return true;
				/*cout << "Fecha valida." << endl;*/
				break;
			default: return false;
				/*cout << "Fecha invalida." << endl;*/
				break;
			}
		}
	}
	
	/*if (fecha == true) {
		cout << "Fecha valida." << endl;
	}
	else {
		cout << "Fecha invalida." << endl;
	}
	return fecha;*/
}

int main() {
	int dia, mes, anio;
	bool fecha;

	do {
		cout << "Ingrese una fecha en formato dd-mm-aa" << endl;
		cin >> dia >> mes >> anio;
	} while (dia < 1 && dia > 31 && mes < 1 && mes >12);

	fecha = validarFecha(anio, mes, dia);

	if (fecha == 1) {
		cout << "Fecha valida." << endl;
	}
	else {
		cout << "Fecha invalida." << endl;
	}

	system("pause");
	return 0;
}