//ejercicio 5*5: arrays 5. meyor elemento de un vector

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[100], n, mayor = 0;
	
	cout<<"Cual sera el largo del array: "; cin>>n;
	
	for(int i = 0; i < n; i++){
		cout<<i+1<<". Digite el nuemero: "; cin>>numeros[i];
		
		if(numeros[i] > mayor){
			mayor = numeros[i];
		}
	}
	
	cout<<"El numero mayor es: "<<mayor<<endl;
	
	getch();
	return 0;
}
