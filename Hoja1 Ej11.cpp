#include <iostream>
using namespace std;

double areaCircunferencia(double radio, double area) {

	area = pow(radio, 2)*3.1416;

	return area;
}

int main() {
	double radio;
	double area;

	cout << "Ingrese el radio de la circunferencia: ";
	cin >> radio;

	area = areaCircunferencia(radio, area)

	cout << "El area de la circunferencia es: " << area << endl;


	system("pause");
	return 0;
}