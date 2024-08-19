//Ejercicio 2: Manejo de numeros v2.0 PRECIOS

#include<iostream>

using namespace std;

int main(){
	float precio, iva = .16, prcFinal = 0, prcIva = 0;
	
	cout<<"Precio : "; cin>>precio;
	
	prcIva = precio * iva;
	prcFinal = precio - prcIva;
	
	cout<<"\nPrecio con iva: "<<prcFinal;
	
	return 0;
}
