//Ejercicio 38: cadenas 4. strcpy() 1.2

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main() {
	char cadena[100];
	char cadenaspy[100];
	
	cout<<"Digite la cadena que desea copear: ";
	cin.getline(cadena, 100, '\n');
	
	strcpy(cadenaspy, cadena);
	
	cout<<"\nCadena copeada: "<<cadenaspy;
	
	getch();
	return 0;
}
