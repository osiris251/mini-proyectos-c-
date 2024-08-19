//Ejercicio 9: Suma de valores

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int n, suma = 0;
	
	do {
		cout<<"Numero mayor a 0 y que no este entre 20 y 30: "; cin>>n; cout<<endl;
		if(((n < 20) || (n > 30)) && n > 0) {
			suma += n;
		}
	} while(((n < 20) || (n > 30)) && n > 0);
	
	cout<<"Suma de los valores: "<<suma;
	
	getch();
	
	return 0;
}
