//Ejercicio 40: cadenas 6. strcmp() 1.2

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main() {
	char palabra1[100];
	char palabra2[100];
	
	cout<<"digite la primer palabra: ";
	cin>>palabra1;
	cout<<"digite la segunda palabra: ";
	cin>>palabra2;
	
	if(strcmp(palabra1, palabra2) == 0) {
		cout<<"Son iguales!!";
	} 
	else if (strcmp(palabra1, palabra2) < 0) {
		cout<<"la palabra "<<palabra1<<" va antes alfabeticamente que "<<palabra2;
	} else {
		cout<<"la palabra "<<palabra1<<" va despues alfabeticamente que "<<palabra2;
	}
	
	getch();
	return 0;
}
