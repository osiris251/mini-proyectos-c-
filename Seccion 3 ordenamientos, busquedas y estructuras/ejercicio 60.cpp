//Ejercicio 60: Estructuras 6. Promedio

#include<iostream>
#include<conio.h>

using namespace std;

struct promedio {
	int nota1;
	int nota2;
	int nota3;
};

struct alumno {
	char nombre[20];
	char sexo;
	int edad;
	struct promedio notas;
	double promedioFinal;
} alumno[100];

int main() {
	int cntAlm, i;
	double mayor;
	
	cout<<"Cantidad de alumnos: ";
	cin>>cntAlm;
	
	for(i = 0; i < cntAlm; i++) {
		fflush(stdin);
		cout<<"\n"<<"Nombre del alumno: ";
		cin.getline(alumno[i].nombre, 20, '\n');
		cout<<"Sexo del alumno: ";
		cin>>alumno[i].sexo;
		cout<<"Edad del alumno: ";
		cin>>alumno[i].edad;
		cout<<"Nota 1 del alumno: ";
		cin>>alumno[i].notas.nota1;
		cout<<"Nota 2 del alumno: ";
		cin>>alumno[i].notas.nota2;
		cout<<"Nota 3 del alumno: ";
		cin>>alumno[i].notas.nota3;
		
		alumno[i].promedioFinal = (alumno[i].notas.nota1 + alumno[i].notas.nota2 + alumno[i].notas.nota2) / 3;
	}
	
	for(i = 0; i < cntAlm; i++) {
		if(alumno[i].promedioFinal > mayor) {
			mayor = alumno[i].promedioFinal;
		}
	}

	cout<<"\n"<<"--Mejor/es alumno/s--"<<endl;

	for(i = 0; i < cntAlm; i++) {
		if(alumno[i].promedioFinal == mayor) {
			cout<<"\n"<<"Nombre: "<<alumno[i].nombre<<endl;
			cout<<"Edad: "<<alumno[i].edad<<endl;
			cout<<"Sexo: "<<alumno[i].sexo<<endl;
			cout<<"Promedio: "<<alumno[i].promedioFinal;
		}
	}
	
	getch();
	return 0;
}
