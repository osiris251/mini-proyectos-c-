//Ejercicio 66. Funciones 5. Valor maximo

#include<iostream>
#include<conio.h>

using namespace std;

template <class tipo>
void maximo(tipo a, tipo b, tipo c);

int main() {
	int a, b, c;
	cout<<"Digite el primer valor: "; cin>>a;
	cout<<"Digite el segundo valor: "; cin>>b;
	cout<<"Digite el tercer valor: "; cin>>c;
	
	maximo(a, b, c);
	
	getch();
	return 0;
}

template<class tipo>
void maximo(tipo a, tipo b, tipo c) {
	if(a >= b && a >= c) {
		cout<<"El maximo es: "<<a;
	}
	else if (b >= a && b >= c){
		cout<<"El maximo es: "<<b;
	} else {
		cout<<"El maximo es: "<<c;
	}
}

