// Lab2P3_OliverIraheta.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <cstdlib>
#include <ctime>
#include <iostream>
#include <array>
using namespace std;
const int tam = 10;

int fact(int n) {
	if (n == 1 || n == 0) {
		return 1;
	}
	else {
		return n * fact(n - 1);
	}
}
void crearTriangulo(int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}
}
void printArray(char arreglo[]) {
	for (int i = 0; i < tam; i++) {
		cout << arreglo[i] << " ";
	}
}
void OrdenarArreglo(char arreglo[]) {
	for (int i = 0; i < 10 - 1; i++) {
		for (int j = i + 1; j < 10; j++) {
			if (arreglo[i] > arreglo[j]) {
				char letra = arreglo[i];
				arreglo[i] = arreglo[j];
				arreglo[j] = letra;
			}
		}
	}
}
int main() {
	int salir;
	char arreglo[10];
	do {
		cout << "1- Ordenamiento y omisión en arreglos\n" <<"2- Factoriales y figuras\n" <<"0- SALIR\n"<<"==> ";
		cin >> salir;
		if (salir==1){
			for (int i = 0; i < tam; i++) 
				arreglo[i] = 'a' + rand() % 26;

			cout << "Arreglo Original: ";
			for (int i = 0; i < tam; i++) 
				cout << arreglo[i] << " ";

			OrdenarArreglo(arreglo);
			cout << "\nNuevo arreglo con caracteres ordenados y sin repetir: ";
			for (int i = 0; i < tam; i++) {
				if (arreglo[i] != '\0') {
					cout << arreglo[i] << " ";
				}
			}
			cout << endl;
		}
		if (salir == 2) {
			int n;
			cout << "Ingrese un entero positivo: ";
			cin >> n;
			cout << "El factorial de" << n << " es: " << fact(n) << endl;
			crearTriangulo(n);
		}
	} while (salir);
	return 0;

}