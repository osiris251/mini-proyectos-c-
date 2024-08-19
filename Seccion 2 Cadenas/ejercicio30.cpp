//Ejercicio 30: matrices 2. Diagonal

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[10][10];
	
	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 10; j++){
			cout<<"Digite un numero que se encontrara en ["<<i<<"]["<<j<<"]: ";
			cin>>numeros[i][j];
		}
	}
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			if(i == j){	
				cout<<numeros[i][j]<<" ";
			}
		}
	}
	
	getch();
	return 0;
}
