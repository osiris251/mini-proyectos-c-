//Ejercicio 61: Estructuras 7. Carrera

#include<iostream>
#include<conio.h>

using namespace std;

struct tiempo {
	int horas;
	int minutos;
	int segundos;
} etapas[100];

int main() {
	int numEtp, i, hrsT, mntT, sgnT;
	
	cout<<"Numero de etapas: ";
	cin>>numEtp;
	
	for(i = 0; i < numEtp; i++) {
		fflush(stdin);
		cout<<"Horas: ";
		cin>>etapas[i].horas;
		cout<<"Minutos: ";
		cin>>etapas[i].minutos;
		cout<<"Segundos: ";
		cin>>etapas[i].segundos;
		cout<<"\n";
		
		hrsT += etapas[i].horas;
		mntT += etapas[i].minutos;
		sgnT += etapas[i].segundos;
		
		if(sgnT >= 60) {
			mntT += 1;
			sgnT -= 60;
		}
		
		if(mntT >= 60) {
			hrsT += 1;
			mntT -= 60;
		}
	}
	
	 
	
	cout<<"\n--Tiempo Total--\n"<<endl;
	
	
	cout<<hrsT<<":"<<mntT<<"."<<sgnT<<endl;
	
	getch();
	return 0;
}
