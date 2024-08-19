//Ejercicio 44. cadenas 10. strupr() 1.2

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main() {
	char palabra1[100];
	char palabra2[100];
	
	cout<<"Digite la primera palabra: ";
	cin.getline(palabra1, 100, '\n');
	
	cout<<"Digite la segunda palabra: ";
	cin.getline(palabra2, 100, '\n');
	
	if(strcmp(palabra1, palabra2) == 0) {
		cout<<"Son iguales!!";
	}
	else {
		cout<<"No son iguales";
	}
	
	getch();
	return 0;
}
