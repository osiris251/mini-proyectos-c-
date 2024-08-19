//Ejercicio 36. cadenas 2. strlen() 1.2

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main() {
	char palabra[100];
	int longitud;
	
	cout<<"Digite la palabra: ";
	cin.getline(palabra, 100, '\n');
	
	longitud = strlen(palabra);
	
	if(longitud >= 10) {
		cout<<"\n"<<palabra;
	} else {
		cout<<"No hay nada, es menor a 10 caracteres :(";
	}
	
	getch();
	return 0;
}
