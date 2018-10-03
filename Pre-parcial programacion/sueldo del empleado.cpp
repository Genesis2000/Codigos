//Creado por Genesis de los Angeles Villanueva Solis
//carnet: VS18009
//fecha en que se creo: 9 de septiembre del 2018

//realizar un programa en c++ que sistematice este procedimiento y al ingresar las 
//ventas de un empleado inmediatamente muestre el sueldo que le corresponde

//librerias que se usaron para realizar el programa
#include <iostream>
#include <iomanip>//para dar presicion con el metodo setprecision a un flotante
#include <cstdlib>	
#include <windows.h>

//se utiliza lo siguiente para evitar poner std en cada linea de codigo
using namespace std;

//variables utilizadas para el codigo
int ventas;
float sueldo;

//cuerpo del programa para calcular el sueldo del empleado 
int main ()
{
	
	system ("color 5C"); // codigo para cambiar los colores de texto y de fondo 
	Beep(523,500);
Beep(587,500);
Beep(659,500);
Beep(698,500);
Beep(784,800);
Beep(784,500);
Beep(876,400);
Beep(876,400);
Beep(876,400);
Beep(876,400);
Beep(784,800);
Beep(876,400);
Beep(876,400);
Beep(876,400);
Beep(876,400);
Beep(784,800);
Beep(698,400);
Beep(698,400);
Beep(698,400);
Beep(698,400);
Beep(659,700);
Beep(659,500);
Beep(587,400);
Beep(587,400);
Beep(587,400);
Beep(587,400);
Beep(523,1000);

//se agrega un do y un while para evitar los numeros menores a 0
	do{
	// se solicita al usuario que ingrese el total de ventas del usuario realizadas en un mes
	cout<<"Ingrese el total de ventas"<<endl;
	//se guarda la variable para realizar los procesos
	cin>>ventas;
}
//el while se agrega para repetir la peticion de ingreso
while(ventas<0);

	
	// calcular el sueldo con la condicion 1
	if (ventas>0 && ventas<=500000)
	{
		sueldo=80000;
	}
	// calcular el sueldo con la condicion 2
	else if (ventas>500001 && ventas<=1000000)
	{
		sueldo=160000;
	}
	// calcular el sueldo con la condicion 3
	else if (ventas>1000001 && ventas<=1500000)
	{
		sueldo=320000;
	}
	// calcular el sueldo con la condicion 4
	else if (ventas>1500001 && ventas<=2500000)
	{
		sueldo=450000;
	}
	// calcular el sueldo con la condicion 5
	else if (ventas>2500001 && ventas<=4000000)
	{
		sueldo=550000;
    }
    // calcular el sueldo con la condicion 6
    else if (ventas>4000000)
    {
    	// se calcula el sueldo del vendedor multiplicando el total de ventas por 20% de las ventas y resulta el salario
    sueldo = int(ventas * 0.20); 
    
	} 
	
	// se imprime el sueldo del vendedor 
	cout<<"el sueldo del vendedor es: $"<<fixed<<setprecision(2)<<sueldo<<endl;

	return 0;
}
// fin del programa
