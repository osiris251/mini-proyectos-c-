//Ejercicio 53: Busquedas 1. Busqueda secuencial

#include<iostream>
#include<conio.h>

using namespace std;

int main() {
	int numeros[] = {5, 2, 1, 4, 3};
	int i, dato;
	char band = 'F';
	
	dato = 4;
	
	//ALGORITMO
	i = 0;
	while((band == 'F') && (i < 5)) {
		if(numeros[i] == dato) {
			band = 'V';
		}
		i++;
	}
	
	if(band == 'F') {
		cout<<"El dato: "<<dato<<" no ha sido encontrado en el arreglo";
	}
	else if(band == 'V') {
		cout<<"El dato: "<<dato<<" se encuentra en el arreglo en la posicion: "<<i - 1;
	}
	
	getch();
	return 0;
}
