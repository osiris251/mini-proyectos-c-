//Ejercicio 23: Arrays 3. visualizacion de elementos

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[100], n;
	
	cout<<"Digite el numero de numeros que tendra el arreglo: "; cin>> n;
	
	for(int i = 0; i < n; i++){
		cout<<"Digite el numero: ";
		cin>>numeros[i];
	}
	
	for(int i = 0; i < n; i++){
		cout<<i<<" -> "<<numeros[i]<<endl;
	}
	
	
	getch();
	return 0;
}
