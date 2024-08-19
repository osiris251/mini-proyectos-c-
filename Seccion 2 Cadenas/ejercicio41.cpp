//Ejercicio 41: candenas 7. strrev()
//Sirve para voltear una cadena

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main() {
	char cadena[] = "Hola";
	
	strrev(cadena);
	
	cout<<cadena;
	
	getch();
	return 0;
}
