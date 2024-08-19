//Ejercicio 12: 1+2+3...+n

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int n, resultado = 0;
	
	cout<<"valor de n: "; cin>>n;
	
	for(int i = 1; i <= n; i++) {
		resultado += i;
	}
	
	cout<<"el resultado es: "<<resultado<<endl;
	
	getch();
	
	return 0;
}
