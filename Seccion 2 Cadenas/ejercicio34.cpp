//Ejercicio 34. matrices 8. Producto de matrices.

#include<iostream>
#include<conio.h>

using namespace std;

int main() {
	int numeros1[3][3];
	int numeros2[3][3];
	
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			cout<<"Digite el valor que se encontrara ["<<i<<"]["<<j<<"] en la primera matriz: ";
			cin>>numeros1[i][j];
		}
	}
	
	cout<<"\n";
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j <3; j++) {
			cout<<"Digite el valor que se encontrara ["<<i<<"]["<<j<<"] en la segunda matriz: ";
			cin>>numeros2[i][j];
		}
	}
	
	cout<<"\nEl producto es: "<<endl;
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j <3; j++) {
			cout<<numeros1[i][j] * numeros2[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	getch();
	return 0;
}
