//Ejericio 62: Funciones 1. Multiplicación

#include<iostream>
#include<conio.h>

using namespace std;

//Prototipos de funciones
void pedirDatos();
void multiplicar(float x, float y);

float num1, num2;

int main() {
	pedirDatos();
	multiplicar(num1, num2);
	
	getch();
	return 0;
}

//Funciones
void pedirDatos() {
	cout<<"Digite dos numeros: ";
	cin>>num1>>num2;
}

void multiplicar(float x, float y) {
	float multiplicacion = x * y;
	cout<<"La multiplicacion es: "<<multiplicacion<<endl;
}
