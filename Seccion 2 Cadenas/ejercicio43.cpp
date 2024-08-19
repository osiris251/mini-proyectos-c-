//Ejercicio 43. cadenas 9. strupr()
//Sirve para que se eleve a mayuscula

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main() {
	char palabra1[] = "hola";
	
	strupr(palabra1);
	
	cout<<palabra1;
	
	getch();
	return 0;
}
