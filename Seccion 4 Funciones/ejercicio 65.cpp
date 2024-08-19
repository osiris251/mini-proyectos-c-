//Ejercicio 65. Funciones 4. Valor unico

#include<iostream>
#include<conio.h>

using namespace std;

template <class var>
void despliegue(var dato);

int main() {
	despliegue(12.3);
	
	getch();
	return 0;
}

template <class var>
void despliegue(var dato) {
	cout<<"El dato es: "<<dato;
}
