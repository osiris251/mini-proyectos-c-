//Ejercicio 58. Estructuras 4. Empleados

#include<iostream>
#include<conio.h>

using namespace std;

struct Empleado {
	char nombre[30];
	double salario;
} empleados[100];

int main() {
	int num_emp, i, mayor = 0, menor = 0;
	
	cout<<"Numero de empleados: "; cin>>num_emp;
	
	for(i = 0; i < num_emp; i++) {
		fflush(stdin);
		cout<<"Digite el nombre del Empleado: ";
		cin.getline(empleados[i].nombre, 30, '\n');
		cout<<"Salario del empleado: ";
		cin>>empleados[i].salario;
		fflush(stdin);
		cout<<"\n\n";
	}
	
	menor = empleados[0].salario;
	
	for(i = 0; i < num_emp; i++) {
		if(empleados[i].salario >= mayor) {
			mayor = empleados[i].salario;
		} else if(empleados[i].salario <= menor) {
			menor = empleados[i].salario;
		}
	}
	
	for(i = 0; i < num_emp; i++) {
		if(empleados[i].salario == mayor) {
			cout<<"Trabajador con mayor salario: "<<empleados[i].nombre<<endl;
			cout<<"Salario: "<<empleados[i].salario<<endl<<"\n";
		}
		if(empleados[i].salario == menor) {
			cout<<"Trabajador con menor salario: "<<empleados[i].nombre<<endl;
			cout<<"Salario: "<<empleados[i].salario<<endl<<"\n";
		}
	}
	
	
	getch();
	return 0;
}
