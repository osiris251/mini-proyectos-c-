//Ejercicio 42: cadenas 8. palindromo

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main() {
	char palabra1[100];
	char aux[100];
	
	cout<<"digite la palabra o frase: ";
	cin.getline(palabra1, 100, '\n');
	
	strcpy(aux, palabra1);
	
	strrev(aux);
	
	if(strcmp(aux, palabra1) == 0) {
		cout<<"\nEs palindromo!!!";
	}
	else {
		cout<<"\nNo es palindromo :(";
	}
	
	getch();
	return 0;
}
