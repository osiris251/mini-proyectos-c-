//Ejercicio 35: cadenas 1. strlen()

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main() {
	char palabra[] = "Hola :)";
	int longitud = strlen(palabra);
	
	cout<<"La longitud de la palabra es de: "<<longitud;
	
	getch();
	return 0;
}
