//Ejercicio 4: Expresiones

#include<iostream>

using namespace std;

int main(){
	float res, a, b;
	
	cout<<"a: "; cin>>a;
	cout<<"b: "; cin>>b;
	
	res = (a / b) + 1;
	
	cout.precision(3);
	cout<<"resultado: "<<res;
	
	return 0;
}
