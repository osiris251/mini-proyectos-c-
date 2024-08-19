//Ejercicio 3: datos

#include<iostream>

using namespace std;

int main(){
	//Variables
	int edad;
	char sexo[10];
	float altura;
	
	//Entradas de usuario
	cout<<"edad: "; cin>> edad;
	cout<<"Sexo: "; cin>> sexo;
	cout<<"altura en metros: "; cin>> altura;
	
	//Mostrar datos
	cout<<"\nEdad: "<<edad<<endl;
	cout<<"Sexo: "<<sexo<<endl;
	cout<<"Altura: "<<altura<<" metros"<<endl;
	
	return 0;
}
