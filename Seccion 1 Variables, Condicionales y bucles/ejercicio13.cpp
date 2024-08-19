//Ejercicio 13: 1+3+5...+2n-1

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int n, resultado = 0;
	
	cout<<"Valor de n: "; cin>>n;
	
	for(int i = 1; i <= ((2 * n) - 1); i+=2){
		resultado += i;
	}
	
	cout<<"El resultado es: "<<resultado<<endl;
	
	getch();
	
	return 0;
}
