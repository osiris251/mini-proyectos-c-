//Ejercicio 57: Estructuras 3. Corredor

#include<iostream>
#include<conio.h>

using namespace std;

struct Corredor {
	char nombre[30];
	int edad;
	char sexo;
	char club[30];
}corredor1;

int main() {
	cout<<"Digite el nombre del corredor: ";
	cin.getline(corredor1.nombre, 30, '\n');
	cout<<"Digite la edad del corredor: ";
	cin>>corredor1.edad;
	cout<<"Digite el sexo del corredor: ";
	cin>>corredor1.sexo; fflush(stdin);
	cout<<"Digite el club del corredor: ";
	cin.getline(corredor1.club, 30, '\n');
	
	cout<<"\n"<<"--"<<corredor1.nombre<<"--"<<endl<<"\n";
	cout<<"Edad: "<<corredor1.edad<<endl;
	
	if(corredor1.edad <= 18 && corredor1.edad > 0) {
		cout<<"Liga Juvenil";
	} else if(corredor1.edad <= 40 && corredor1.edad > 18) {
		cout<<"Liga Normal";
	} else if(corredor1.edad > 40 ) {
		cout<<"Liga Veterano";
	} else {
		cout<<"Edad incorrecta";
	}
	
	cout<<"\nSexo: "<<corredor1.sexo<<endl;
	cout<<"Club: "<<corredor1.club<<endl;
	
	getch();
	return 0;
}
