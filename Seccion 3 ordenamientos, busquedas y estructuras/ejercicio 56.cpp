//Ejercicio 56: estructuras 2. Estructura anidada

#include<iostream>
#include<conio.h>

using namespace std;

struct direccion {
	char direccion[20];
	char provincia[30];
	char ciudad[20];
};

struct empleado {
	char nombre[20];
	struct direccion empleado_direccion;
	double salario;
} empleado[2];

int main() {
	int i;
	
	for(i = 0; i < 2; i++) {
		fflush(stdin);
		cout<<"Digite el nombre del empleado "<<i + 1<<": ";
		cin.getline(empleado[i].nombre, 20, '\n');
		cout<<"Digite la direccion del empleado "<<i + 1<<": ";
		cin.getline(empleado[i].empleado_direccion.direccion, 20, '\n');
		cout<<"Digite la ciudad del empleado "<<i + 1<<": ";
		cin.getline(empleado[i].empleado_direccion.ciudad, 20, '\n');
		cout<<"Digite la provincia del empleado "<<i + 1<<": ";
		cin.getline(empleado[i].empleado_direccion.provincia, 20, '\n');
		cout<<"Digite el salario del empleado "<<i + 1<<": ";
		cin>>empleado[i].salario;
		cout<<"\n";
	}
	
	for(i = 0; i < 2; i++) {
		cout<<"Nombre: "<<empleado[i].nombre<<endl;
		cout<<"Direccion: "<<empleado[i].empleado_direccion.direccion<<endl;
		cout<<"Ciudad: "<<empleado[i].empleado_direccion.ciudad<<endl;
		cout<<"Provincia: "<<empleado[i].empleado_direccion.provincia<<endl;
		cout<<"Salario: "<<empleado[i].salario<<endl<<"\n";
	}
	
	getch();
	return 0;
}
