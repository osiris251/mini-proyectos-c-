//Ejercicio 6: Bucles

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int mayor;
	float n;
	
	do{
		cout<<"escribe un numero: "; cin>> n;
		if(n != 0){
			mayor++;
		}
	} while(n != 0);
	
	cout<<"Numeros leidos: "<<mayor;
	
	cout<<endl;
	cout<<endl;
	system("pause");
	
	return 0;
}
