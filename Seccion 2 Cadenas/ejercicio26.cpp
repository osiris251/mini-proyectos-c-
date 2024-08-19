//Ejercicio 26: Arrays 6. Existe algun numero que la suma de los restos dé ese numero

#include<iostream>
#include<conio.h>

using namespace std;

int main() {
	int numeros[100], n, mayor = 0, suma = 0;
	
	cout<<"Cual sera el largo del array: "; cin>>n;
	
	for(int i = 0; i < n; i++){
		cout<<i+1<<". Digite el nuemero: "; cin>>numeros[i];
		
		if(numeros[i] > mayor){
			mayor = numeros[i];
		}
	}
	
	for(int i = 0; i < n; i++){
		if(numeros[i] != mayor){
			suma += numeros[i];
		}
	}
	
	if(mayor == suma){
		cout<<"Si hay coincidencia!!"<<endl;
	}else {
		cout<<"No hay coincidencia!!"<<endl;
	}
	
	getch();
	return 0;
}
