//Creado por Genesis de los Angeles Villanueva Solis
//Carnet: VS18009
//Fecha de creacion: 19 de septiembre del 2018
//Calcular el factorial de un numero

#include <iostream>
#include <windows.h>
using namespace std;

int main() {
	
	int z;//se declaran las variables que se utilizaran
	int fact=1;
	cout<<"ingrese el numero:";//le pedimos al usuario que digite la variable numero
	cin>>z;
	{
		
} while (z<0);

	for(int i=1;i<=z;i++){
		fact=fact*i;
	}
	cout<<"el resultado es:"<<fact<<endl;//se imprime el resultado del proceso
	system("pause");
}
