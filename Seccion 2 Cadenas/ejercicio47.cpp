//Ejercicio 47. cadenas 13. atof() atoi()
//atof() para convertir cadena a numeros enteros
//atoi() para convertir cadena a numeros flotantes

#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

int main() {
	int num;
	char numc[] = "123";
	
	float num2;
	char numc2[] = "123.456";
	
	num = atoi(numc);
	num2 = atof(numc2);
	
	cout<<"Numero entero: "<<num<<endl;
	cout<<"\nNumero flotante: "<<num2;
	
	
	getch();
	return 0;
}
