//Ejercicio 49: cadenas 15. Contando cada vocal

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main() {
	char cadena[100];
	char vocales[] = {'a', 'e', 'i', 'o', 'u'};
	int a, e, i, o, u;
	
	cout<<"--CONTADOR DE VOCALES--\n\n\n";
	
	cout<<"Digite la oracion: ";
	cin.getline(cadena, 100, '\n');
	
	strlwr(cadena);
	
	e = 0;
	
	for(int k = 0; k < strlen(vocales); k++) {
		for(int j = 0; j < strlen(cadena); j++) {
			if(cadena[j] == vocales[k]) {
				switch(vocales[k]){
					case 'a':
						a++;
						break;
					case 'e':
						e++;
						break;
					case 'i':
						i++;
						break;
					case 'o':
						o++;
						break;
					case 'u':
						u++;
						break;
					}
			}
		}
	}
	
	cout<<"a: "<<a<<"\n\ne: "<<e<<"\n\ni: "<<i<<"\n\no: "<<o<<"\n\nu: "<<u;
	
	getch();
	return 0;
}
