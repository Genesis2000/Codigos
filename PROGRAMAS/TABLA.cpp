//Creado por Genesis de los Angeles Villanueva Solis
//Carnet: VS18009
//Fecha de creacion: 17 de septiembre del 2018
//Tabla

//#include <cstdlib>
#include <iostream>
#include <windows.h>
using namespace std;

int main() 
{
	for(int x=1; x<=10; x++){
		cout<<"TABLA DEL "<<x<<endl;
	   for(int i=1;i<=10;i++){
		cout <<i<<"x"<<x<<"="<<i*x<<endl;
		
		}
	}
	
	system("pause");
	return EXIT_SUCCESS;
}
