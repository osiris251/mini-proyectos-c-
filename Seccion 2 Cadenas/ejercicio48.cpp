//Ejercicio 48: cadenas 14. atoi() y atof() 1.2

#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

int main() {
	int num1;
	float num2;
	
	char numC1[100];
	char numC2[100];
	
	cout<<"primer numero entero: ";
	cin>>numC1;
	
	cout<<"primer numero real: ";
	cin>>numC2;
	
	num1 = atoi(numC1);
	num2 = atof(numC2);
	
	cout<<"\nEl resultado de la suma es: "<<num1 + num2;
	
	getch();
	return 0;
}
