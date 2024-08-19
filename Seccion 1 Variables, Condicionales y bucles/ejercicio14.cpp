//Ejercicio 14: 1!+2!+3!..n!

#include<iostream>
#include<conio.h>

using namespace std;

int main() {
	int n, resultado = 0, factorial = 1;
	
	cout<<"Valor de n: "; cin>>n;
	
	for(int i = 1; i <= n; i++){
		factorial *= i;
		resultado += factorial;
	}
	
	cout<<"El resultado de la suma de factoriales es: "<<resultado<<endl;
	
	getch();
	
	return 0;
}
