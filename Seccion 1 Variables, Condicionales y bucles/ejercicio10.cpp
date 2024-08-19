//Ejercicio 10: "x" a la "y" sin pow :'(

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int x, y, xfin = 1;
	
	cout<<"X positiva y entera: "; cin>>x;
	cout<<"Y positiva y entera: "; cin>>y;
	
	for(int i = 0; i < y; i++) {
		xfin = xfin * x;
	}
	
	cout<<"resultado: "<<xfin;
	
	getch();
	
	return 0;
}
