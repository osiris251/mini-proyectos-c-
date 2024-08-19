//Ejercicio 46: cadenas 12. strwlr()

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main() {
	char pal[100];
	char b[] = "B";
	
	cout<<"Ingrese su numbre en mayusculas: ";
	cin.getline(pal, 100, '\n');
	
	if(strcmp(b, pal) > 0) {
		strlwr(pal);
		cout<<pal;
	} else {
		cout<<"No empieza con A";
	}
	
	
	getch();
	return 0;
}
