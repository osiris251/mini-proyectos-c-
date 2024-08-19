//Ejercicio 40: cadenas 6. strcat() 1.2
//Sirve para concatenar una cadena

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main() {
	char saludo[] = "Hola que tal ";
	char nombre[100];
	
	cout<<"Digite su nombre: ";
	cin.getline(nombre, 100, '\n');
	
	strcat(saludo, nombre);
	
	cout<<"\n"<<saludo;
	
	getch();
	return 0;
}
