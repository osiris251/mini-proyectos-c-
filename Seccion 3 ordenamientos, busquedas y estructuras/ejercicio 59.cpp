//Ejercicio 59: Estructuras 5. 	competidores

#include<iostream>
#include<conio.h>

using namespace std;

struct competidores {
	char nombre[30];
	char pais[20];
	int numeroDeMedallas;
} competidor[100];

int main() {
	int cmpNum, i, mayor;
	
	cout<<"Numero de competidores: ";
	cin>>cmpNum;
	
	for(i = 0; i < cmpNum; i++) {
		fflush(stdin);
		cout<<"\n";
		cout<<"Nombre del competidor: ";
		cin.getline(competidor[i].nombre, 30, '\n');
		cout<<"Pais del competidor: ";
		cin.getline(competidor[i].pais, 20, '\n');
		cout<<"Numero de medallas: ";
		cin>>competidor[i].numeroDeMedallas;
	}
	
	for(i = 0; i < cmpNum; i++) {
		if(competidor[i].numeroDeMedallas >= mayor) {
			mayor = competidor[i].numeroDeMedallas;
		}
	}
	
	for(i = 0; i < cmpNum; i++) {
		if(competidor[i].numeroDeMedallas == mayor) {
			cout<<"\n"<<competidor[i].nombre<<endl;
			cout<<competidor[i].pais<<endl;
		}
	}
	
	getch();
	return 0;
}
