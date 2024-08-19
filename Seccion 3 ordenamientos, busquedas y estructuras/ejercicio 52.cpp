//Ejercicio 52. Ordenamientos 3. Ordenamientos por seleccion

#include<iostream>
#include<conio.h>

using namespace std;

int main() {
	int numeros[] = {5, 2, 3, 1, 4};
	int i, j, aux, min;
	
	for(i = 0; i < 5; i++) {
		min = i;
		for(j = i + 1; j < 5; j++) {
			if(numeros[j] < numeros[min]) {
				min = j;
			}
		}
		aux = numeros[i];
		numeros[i] = numeros[min];
		numeros[min] = aux;
	}
	
	cout<<"Orden ascendente: "<<endl;
	for(i = 0; i < 5; i++) {
		cout<<numeros[i]<<" \n";
	}
	
	cout<<"\nOrden descendente: "<<endl;
	for(i = 4; i >= 0; i--) {
		cout<<numeros[i]<<" \n";
	}
	
	getch();
	return 0;
}
