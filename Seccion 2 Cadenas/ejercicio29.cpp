//Ejercicio 29: matrices 1

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[100][100], row, col;
	
	cout<<"numero de filas: "; cin>>row;
	cout<<"numero de columnas: "; cin>>col;
	
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			cout<<"Digite un numero que se encontrara en ["<<i<<"]["<<j<<"]: ";
			cin>>numeros[i][j];
		}
	}
	
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			cout<<numeros[i][j];
		}
		cout<<"\n";
	}
	
	getch();
	return 0;
}
