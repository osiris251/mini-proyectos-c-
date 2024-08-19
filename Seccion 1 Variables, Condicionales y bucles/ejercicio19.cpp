//Ejercicio 19: Adivina el número

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(){
	int numero, dato, contador = 0;
	
	srand(time(NULL)); //Genera un numero aleatorio
	dato = 1 + rand()%(100);
	
	do{
		cout<<"Digite un numero: "; cin>>numero;
		
		if(numero > dato) {
			cout<<"digite un numero menor\n";
		}
		if(numero < dato) {
			cout<<"digite un numero mayor\n";
		}
		contador++;
	}while(numero != dato);
	
	cout<<"Felicidades encontraste el numero que era "<<dato<<" en "<<contador<<" intentos"<<"!!"<<endl;
	
	getch();
	
	return 0;
}
