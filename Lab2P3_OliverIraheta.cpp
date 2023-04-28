// Lab2P3_OliverIraheta.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <array>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
	int salir = 0;
	array<int, 5> values;
	do {
		cout << "1- Ordenamiento y omisión en arreglos" << endl << "2- Factoriales y figuras" << endl << "0- SALIR" << endl << "-> ";
		cin >> salir;

	} while (salir);
