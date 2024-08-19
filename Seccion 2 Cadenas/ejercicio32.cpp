//Ejercicio 32: matrices 4. Suma de matriz

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros1[3][3];
	int numeros2[3][3];
	
	for(int i = 0; i < 3; i++) {  
		for(int j = 0; j < 3; j++) {
			cout<<"Introduzca el valor ["<<i<<"]["<<j<<"] de la primera matriz: ";
			cin>>numeros1[i][j];
		}
	}
	
	cout<<"\n";
	
	for(int i = 0; i < 3; i++) {  
		for(int j = 0; j < 3; j++) {
			cout<<"Introduzca el valor ["<<i<<"]["<<j<<"] de la segunda matriz: ";
			cin>>numeros2[i][j];
		}
	}
	
	cout<<"\nprimera matriz:"<<endl;
	for(int i = 0; i < 3; i++) {  
		for(int j = 0; j < 3; j++) {
			cout<<numeros1[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	cout<<"\nsegunda matriz:"<<endl;
	for(int i = 0; i < 3; i++) {  
		for(int j = 0; j < 3; j++) {
			cout<<numeros2[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	cout<<"\nsuma de las matrices:"<<endl;
	for(int i = 0; i < 3; i++) {  
		for(int j = 0; j < 3; j++) {
			cout<<numeros1[i][j] + numeros2[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	getch();
	return 0;
}
