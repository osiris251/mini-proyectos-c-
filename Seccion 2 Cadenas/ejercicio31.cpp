//Ejercicio 31: matrices 3. Matriz transpuesta

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[3][3];
	
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			cout<<"Introduce el valor: "; cin>>numeros[i][j];
		}
	}
	
	cout<<"\nMatriz original:"<<endl;
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			cout<<numeros[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	cout<<"\nMatriz transpuesta:"<<endl;
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			cout<<numeros[j][i]<<" ";
		}
		cout<<"\n";
	}
	
	getch();
	return(0);
}
