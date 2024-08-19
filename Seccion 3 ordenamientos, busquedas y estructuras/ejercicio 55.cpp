//Ejercicio 55. Estructuras 1. Estructura basica

#include<iostream>
#include<conio.h>

using namespace std;

struct Persona {
	char nombre[30];
	int edad;
}persona1;

int main() {
	cout<<"Nombre1: ";
	cin.getline(persona1.nombre, 30, '\n');
	
	cout<<"Edad1: ";
	cin>>persona1.edad;
	
	cout<<"Nombre1: "<<persona1.nombre<<endl;
	cout<<"Edad1: "<<persona1.edad<<endl<<"\n";
	
	
	getch(); 
	return 0;
}
