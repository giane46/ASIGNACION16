#include <iostream>
using namespace std;

double areaCircunferencia(double radio, double &area, double &perimetro) {
	area = pow(radio, 2)*3.1416;
	perimetro = 2 * 3.1416*radio;


	return area;
}

int main() {
	double radio, area, perimetro;

	cout << "Ingrese el radio de la circunferencia: ";
	cin >> radio;

	area = areaCircunferencia(radio, area);
	perimetro = areaCircunferencia(radio, perimetro);

	cout << "El area de la circunferencia es " << area << endl;
	cout << "El perimetro de la circunferencia es " << perimetro << endl;



	system("pause");
	return 0;
}