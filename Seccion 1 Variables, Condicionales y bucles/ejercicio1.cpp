//Ejercicio 1: Manejo de numeros

#include<iostream>

using namespace std;

int main(){
	int n1, n2, suma = 0, resta = 0, multiplicacion = 0;
	float division = 0;
	
	cout<<"digite un numero: "; cin>>n1;
	cout<<"digite otro numero: "; cin>>n2;
	
	suma = n1 + n2;
	resta = n1 - n2;
	multiplicacion = n1 * n2;
	division = n1 / n2;
	
	cout<<"\nSuma = "<<suma;
	cout<<"\nResta = "<<resta;
	cout<<"\nMultiplicacion = "<<multiplicacion;
	cout<<"\nDivision = "<<division;
	
	return 0;
}
