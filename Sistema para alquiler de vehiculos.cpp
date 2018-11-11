//Creado por Genesis de los Angeles Villanueva Solis
//Carnet: VS18009
//Fecha de creacion: 10 de noviembre del 2018
//Sistema para alquiler de vehiculos implementando imagen en la consola
#include <iostream>//utilizado para operaciones de entrada/salida.
#include <stdio.h>//contiene macro definiciones, constantes, y las declaraciones de funciones
#include <stdlib.h>//contiene funciones para la gestion de memoria dinamica
#include <time.h>//genera un numero aleatorio

//cuerpo del programa
using namespace std;
int c[9]={0,0,0,0,0,0,0,0,0};
char denuevo=' ';

//se declaran las variables que se utilizaran
char opcion(int i);
int ganador(), quieres, rentado; 
void print_rentado(); 
void datos();
void proceso();

int main()//le dice al compilador que aqui inicia el programa
{
	do
	{
    	int h, menu;
	    cout<<"			Bienvenido al alquiler de vehiculos \n";//incertamos un titulo de bienvenida para el cliente
	    cout<<"	1 Realizar Renta\n";
		cout<<"	2 Ver carros disponibles\n";
		cout<<"	3 Carros arrendados\n";
		cout<<"	4 Salir\n";
	cin>>menu;
switch(menu)
    {
         case 1:
			 datos();
				break;
           	case 2:
           		if(quieres==1){
				cout<<"CARROS DISPONIBLES\n";
              	  	cout<<"2- carro 1 \n";
				   system("todos1.png");
				   }else if(quieres==2){
				cout<<"CARROS DISPONIBLES\n";
              		cout<<"1- carro 2  \n";
				   system("todos2.png");
				   }else{
					cout<<"CARROS DISPONIBLES\n";
              		cout<<"1- carro 1 \n";
			  		cout<<"2- carro 2 \n";
				system("todos.png");
				   }
			  getchar();
              break;
           	case 3:
				cout<<"CARROS RENTADOS \n";
			proceso();
              getchar();
              break;
            case 4:
               cout<<"Hasta pronto\n";     
			   getchar();
               exit(1);
              break;
         }         
cout<<"\nDesea volver al menu? (si o no)\n";
         cin>>denuevo;
         if (denuevo>=97) denuevo-=32;
         if ((denuevo!='si')&&(denuevo!='no'))
         for (h=0;h<=8;h++) c[h]=0;
}
while (denuevo=='S');
getchar();
}
void datos()
{	 
	 cout<<"Ingrese el numero de carros a rentar\n";
	 	cin>>quieres;}
void proceso()
{
if(quieres==1){
		cout<<" carro 1 \n";
		system("1.png");
	}else if(quieres==2){
		cout<<" carro 2\n";
		system("2.png");
	}else{
		cout<<"\n No hay carros en renta\n\n";
	}rentado=quieres;
}

