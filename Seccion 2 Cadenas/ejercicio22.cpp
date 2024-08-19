//Ejercicio 22: Arrays 2. Mutiplicacion dentro del vector

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[] = {1, 2, 3, 4, 5};
	int multiplicacion = 1;
	
	for(int i = 0; i < 5; i++){
		multiplicacion *= numeros[i];
	}
	
	cout<<"La multiplicacion de los numeros en este vector es: "<<multiplicacion<<endl;
	
	getch();
	return 0;
}
