//Ejercicio 18: Reprobado!!

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	float calif1, calif2, calif3, media;
	int apro1 = 0, apro2 = 0, apro3 = 0, i = 1;
	
	do{
		cout<<"Calificaciones del alumno numero "<<i<<":"<<endl;
		
		//Primera calificación
		cout<<"Introduzca la calificacion del primer examen: "; cin>>calif1;
		if(calif1 >= 6.0) {
			apro1++;
		}
		
		//Segunda calificación
		cout<<"Introduzca la calificacion del segudo examen: "; cin>>calif2;
		if(calif2 >= 6.0) {
			apro2++;
		}
		
		//Tercera calificación
		cout<<"Introduzca la calificacion del tercer examen: "; cin>>calif3;
		if(calif3 >= 6.0) {
			apro3++;
		}
		
		//Calcular la media
		media = (calif1 + calif2 + calif3) / 3;	
		cout<<"La media es de: "<<media<<endl;
		
		//Comprobar cuantos aprobaron
		if(apro1 == 1 && apro2 == 1 && apro3 == 1) {
			cout<<"El alumno "<<i<<" aprobo todos los examenes"<<endl<<endl<<endl;
		} else if(apro1 == 1 || apro2 == 1) {
			cout<<"El alumno "<<i<<" aprobo al menos un examen"<<endl<<endl<<endl;
		} else if(apro1 == 0 && apro2 == 0 && apro3 == 1) {
			cout<<"El alumno "<<i<<" aprobo solo el ultimo examen"<<endl<<endl<<endl;
		} else {
			cout<<"El alumno "<<i<<" reprobo todos los examenes"<<endl<<endl<<endl;
		}
		
		//Restablecer valores
		calif1 = 0;
		calif2 = 0;
		calif3 = 0;
		media = 0;
		apro1 = 0;
		apro2 = 0;
		apro3 = 0;
		
		//Aumentar i para seguir el bucle
		i++;
	}while(i<=5);
	
	getch();
	
	return 0;
}
