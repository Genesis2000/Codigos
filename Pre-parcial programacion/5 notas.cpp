//Creado por Genesis de los Angeles Villanueva Solis
//Carnet: VS18009
//Fecha de creacion: 17 de septiembre del 2018
//Calcular 5 notas trabajando con arreglos
#include <cstdlib>
#include <iostream>
#include <windows.h>

using namespace std;

int main() {
	float notas[5];
	//int i
	float sumar=0;
	for(int i=0; i<=4; i++){
		do{
		system("cls");
	cout<<"ingrese la nota"<<i+1<<endl;
	cin>>notas[i];
	}while(notas[i]<0 || notas[i]>10);
	sumar=sumar+notas[i];//acumulador
	}
	system("cls");//limpia la pantalla
	for(int i=0; i<=4; i++){
		cout<<"N"<<i+1<<":"<<notas[i]<<endl;
	}
	cout<<"el promedio de notas es de:"<<sumar/5<<endl;
	
	system ("pause");
	
	return EXIT_SUCCESS;
}
