//Ejercicio 33. Matrices 7. Matriz simetrica
//Una matriz es simetrica si es cuadrada y es igual a su matriz transpuesta

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[100][100], row, col;
	char band = 'F';
	
	cout<<"Numero de filas: "; cin>>row;
	cout<<"Numero de columnas: "; cin>>col;
	
	for(int i = 0; i < row; i++) {
		for(int j = 0; j < col; j++) {
			cout<<"Digite el valor que se encontrara en ["<<i<<"]["<<j<<"]: ";
			cin>>numeros[i][j];
		}
	}
	
	if(row == col) {
		for(int i = 0; i < row; i++) {
			for(int j = 0; j < col; j++) {
				if(numeros[i][j] ==  numeros[j][i]) {
					band = 'V';
				}
			}
		}	
	}
	
	if(band == 'V') {
		cout<<"\nEs una matriz simetrica!!!!!";
	} else {
		cout<<"\nNo es una matriz simetrica :(";
	}
	
	getch();
	return 0;
}
