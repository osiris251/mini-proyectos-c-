//Ejercicio 16: 1-2+3-4+5...n;

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int n, resultado = 0;
	
	cout<<"Introduce el valor de n para la expresion 1-2+3...n: "; cin>>n;
	
	for(int i = 1; i <= n; i++) {
		if(i % 2 == 0){
			resultado -= i;
		} else{
			resultado += i;
		}
	}
	
	cout<<"El resultado es: "<<resultado<<endl;
	
	getch();
	
	return 0;
}
