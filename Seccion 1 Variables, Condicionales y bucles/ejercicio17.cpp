//Ejercicio 17: Fibonacci

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int n, y = 1, x = 0, z = 1;
	
	cout<<"Que tan larga quieres que sea la serie de Fibonacci?: "; cin>>n;
	
	for(int i = 1; i <= n; i++){
		z = x + y;
		cout<<z<<"  ";
		x = y;	
		y = z;
	}
	
	getch();
	
	return 0;
}
