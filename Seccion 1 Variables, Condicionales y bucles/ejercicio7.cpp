//Ejercicio 7: Suama de cuadrados

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int resultado;
	
	for(int i = 1; i <= 10; i++){
		resultado += i * i;
	}
	
	cout<<"La suma de los cuadrados es: "<<resultado<<endl<<endl;
	
	getch();
	
	return 0;
}
