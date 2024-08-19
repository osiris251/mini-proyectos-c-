//Ejercicio5: Expresiones v2.0

#include<iostream>

using namespace std;

int main(){
	float a, b, c, d, res;
	
	cout<<"a: "; cin>> a;
	cout<<"b: "; cin>> b;
	cout<<"c: "; cin>> c;
	cout<<"d: "; cin>> d;
	
	res = (a + b) / (c + d);
	
	cout.precision(3);
	cout<<"Resultado: "<<res<<endl;
	
	return 0;
}
