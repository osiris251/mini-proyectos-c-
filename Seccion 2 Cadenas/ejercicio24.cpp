//Ejercicio 24: Arrays 4. sotnemele ed noicazilausiv

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[100], n;
	
	cout<<"Digite el tamaño del array: "; cin>> n;
	
	for(int i = 0; i < n; i++){
		cout<<"Digite el numero: "; cin>>numeros[i];
	}
	
	for(int i = n - 1; i >= 0; i--){
		cout<<i<<" -> "<<numeros[i]<<endl;
	}
	
	getch();
	return 0;
}
