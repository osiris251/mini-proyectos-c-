// Ejercicio 64. Funciones 3. Elevar numero real a entero

#include<iostream>
#include<conio.h>

using namespace std;

void pedirDatos();
void funpot(int x, int y);

int x, y;

int main() {
	pedirDatos();
	funpot(x, y);
	
	getch();
	return 0;
}

void pedirDatos() {
	cout<<"Numero real que desea elevar: "; cin>>x;
	cout<<"Numero natural que desea sea el exponente: "; cin>>y;
}

void funpot(int x, int y) {
	int res = 1;
	for(int i = 1; i <= y; i++) {
		res *= x;
	}
	
	cout<<"El resultado es: "<<res;
}
