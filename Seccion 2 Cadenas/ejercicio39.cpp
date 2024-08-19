//Ejercicio 39: cadenas 5. strcmp()
//Compara dos strings

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main() {
	char palabra1[] = "Hola";
	char palabra2[] = "Hola";
	
	if(strcmp(palabra1, palabra2) == 0) {
		cout<<"Son iguales!!";
	}
	
	getch();
	return 0;
}
