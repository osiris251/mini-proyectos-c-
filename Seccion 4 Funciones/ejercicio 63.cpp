//Ejercicio 63: Funciones 2. al cuadrado

#include<iostream>
#include<conio.h>

using namespace std;

void pedirDato();
float al_cuadrado(float x);

float num;

int main() {
	pedirDato();
	
	cout<<"El resultado de elevarlo al cuadrado es: "<<al_cuadrado(num);
	
	getch();
	return 0;
}

void pedirDato() {
	cout<<"Digite un numero: ";
	cin>>num;
}

float al_cuadrado(float x) {
	float cuadrado = x * x;
	
	return cuadrado;
}
