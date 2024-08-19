//Ejercicio 37: cadenas 3. strcpy()
//copia lo de una cadena a otra :O

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main() {
	char cadena[] = "Hola:)";
	char cadenacpy[100];
	
	strcpy(cadenacpy, cadena);
	
	cout<<cadenacpy;
	
	getch();
	return 0;
}
