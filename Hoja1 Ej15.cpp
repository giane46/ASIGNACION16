#include <iostream>
using namespace std;

int numCombinatorio(int n, int k) {
	float combinatorio;
	float i, factK = 1, factNK = 1;
	float arriba = 1, abajo;
	for (i = 1; i <= n; i++) {
		arriba = arriba * i;
	}
	for (i = 1; i <= k; i++) {
		factK = factK * i;
	}
	for (i = 1; i <= (n - k); i++) {
		factNK = factNK * i;
	}

	abajo = factK * factNK;

	combinatorio = arriba / abajo;


	return combinatorio;
}

int main() {
	int n, k;
	float combinatorio, i;
	float arriba, abajo;
	float factK, factNK;

	cout << "Ingrese N y K, respectivamente: ";
	cin >> n >> k;

	combinatorio = numCombinatorio(n, k);

	cout << "Combinatorio = " << combinatorio << endl;

	system("pause");
	return 0;
}