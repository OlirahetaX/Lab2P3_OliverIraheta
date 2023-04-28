// Lab2P3_OliverIraheta.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <array>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
	int salir = 0;
	array<char, 10> values;
	srand(time(NULL));
	do {
		
		cout << "\n1- Ordenamiento y omisión en arreglos" << endl << "2- Factoriales y figuras" << endl << "0- SALIR" << endl << "-> ";
		cin >> salir;
		if (salir == 1) {
			for (int i = 0; i < 10; i++)
				values[i] = 97 + rand() % (123 - 97);
			cout << "Arreglo original: ";
			for (int i = 0; i < 10; i++)
				cout << values[i] << " ";
		}
		else if (salir == 2) {

		}
	} while (salir);
}
