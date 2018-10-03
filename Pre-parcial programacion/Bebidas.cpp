//Creado por Genesis de los Angeles Villanueva Solis
//Carnet: VS18009
//Fecha de creacion: 24 de septiembre del 2018
//Programa que permite ingresar la produccion diaria de bebidas
#include <iostream>
#include <windows.h>

using namespace std;

void produccion(int bebidas){
	int produccion;
	int agua;
	int azucar;
	
	if (bebidas == 1)
	{
		cout <<"Ingrese la cantidad de soda a producir:"<<endl;
		cin >> produccion;
		agua = produccion = 500;
		azucar = produccion = 800;
	}
	else if(bebidas == 2)
	{
		cout <<"Ingrese la cantidad de jugo a producir:"<<endl;
		cin >> produccion;
		agua = produccion = 600;
		azucar = produccion = 700;
	}
	cout << "El total de agua a usar sera de :"<<agua<<"ml"<<endl;
	cout << "El total de azucar a usar sera de :"<<azucar<<"g"<<endl;
	
	//return produccion;
}

int main() {
	
	int bebidas;
	cout <<"Escoja la bebida de la cual desea saber los productos que necesita:"<<endl;
	cout <<"1.soda"<<endl;
	cout <<"2.jugo"<<endl;
	cin >> bebidas;
	
	system ("cls");
	produccion(bebidas);
	
	return 0;
}
