//Ejercicio 28: arrays 8. Multiplicacion dentro de arreglos

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros1[] = {1, 2, 3, 4, 5};
	int numeros2[5];
	
	for(int i = 0; i < 5; i++) {
		numeros2[i] = numeros1[i] * 2;
	}
	
	for(int i = 0; i < 5; i++) {
		cout<<numeros2[i]<<endl;
	}
	
	getch();
	return 0;
}
