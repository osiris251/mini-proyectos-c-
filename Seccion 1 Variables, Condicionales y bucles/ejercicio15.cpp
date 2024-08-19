//Ejercicio 15: 2^1+2^2+2^3...+2^n

#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int main(){
	int n, resultado;
	
	cout<<"Introduce el valor de n: "; cin>>n;
	
	for(int i = 1; i <= n; i++) {
		resultado += pow(2, i);
	}
	
	cout<<"El resultado es: "<<resultado<<endl;
	
	getch();
	
	return 0;
}
