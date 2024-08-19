//Ejercicio 11: Cual es mayor?

#include<iostream>

using namespace std;

int main(){
	int n1, n2;
	
	cout<<"Primer numero: "; cin>>n1;
	cout<<"Segundo numero: "; cin>>n2;
	
	if(n1 > n2){
		cout<<"El primer numero es mayor que el segundo"<<endl;
	}
	else if(n1 < n2){
		cout<<"El primer numero es menor que el segundo"<<endl;
	}
	else{
		cout<<"Los dos numeros son iguales"<<endl;
	}
		
	return 0;
}
