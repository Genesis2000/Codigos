//Creado por Genesis de los Angeles Villanueva Solis
//Carnet: VS18009
//Fecha de creacion: 21 de septiembre del 2018
//Programa que calcula el total a pagar de cada llamada

#include <iostream>//libreria obligatoria
#include <windows.h>//libreria para que se muestre el resultado en pantalla

using namespace std;//espacio de trabajo estandar lo que permite trabajar de manera predeterminada
 
float costos(float min){
	float costo;//declaracion de una variable
	do
	{
		cout<<"Ingrese los minutos consumidos"<<endl;
		cin>>min;
	}while(min<=0);
	
	if (min >0 && min <=10){
		cout<<"Total a pagar: $0.05";
		
	}
	else if (min >10 && min <15){
		cout<<"Total a pagar: $0.08";
	}
	else if (min > 15){
		cout<<"Total a pagar sera de : $0.10";
		
		//costo=min*0.1;
	}
	return costo;
}
int main(){
	
	float min;//declaramos la variable min que es minutos
	costos(min);
	cout<<endl;//aparecera en pantalla el total a pagar
	system("pause");
	
	return 0;
}

