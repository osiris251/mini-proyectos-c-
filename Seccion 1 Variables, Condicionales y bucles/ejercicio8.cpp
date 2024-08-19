//Ejercicio 8: Lector de temepraturas

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int temperatura, baja, alta;
	float aux;
	
	for(int i = 1; i <= 6; i++) {
		cout<<"Cual es la temperatura actual?: "; cin>>temperatura;
		cout<<endl;
		
		if(i == 1) {
			baja = temperatura;
			alta = temperatura;
		} else {
			if(temperatura < baja){
				baja = temperatura;
			}
			else if(temperatura > alta){
				alta = temperatura;
			}
		}
		
		aux += temperatura;
	}
	
	aux /= 6;
	
	cout<<"La temperatura mas alta es: "<<alta<<endl;
	cout<<"La temperatura mas baja es: "<<baja<<endl;
	cout.precision(3);
	cout<<"La temperatura media fue de: "<<aux<<endl;
	
	getch();
	
	return 0;
}
