//Codigo fuente: calcular el total de la venta aplicando descuentos y el IVA del 13%
//Creado por: Genesis de los Angeles Villanueva Solis
//Carnet: VS18009

#include <iostream>
//le diremos al compilador que incluya la biblioteca iostream

using namespace std;
//en este apartado de codigo que utilizare es el espacio de nombre de iostream

int main() {
	//le dice al compilador que aqui inicia el programa
	
	//declaramos variables de tipo double para almacenar datos o valores reales
	double tdv;
	//la variable tdv significa total de ventas
	//En ella se almacenaran los valores de la operacion realizada entre el numero de sacos y el precio
	//de cada saco que es igual a $100.00
	
	double desc;
	//la variable desc significa descuento
	//en ella almacenaremos el valor resultante de multiplicar el total a pagar para obtener el valor del descuento
	
	double iva;
	//la variable iva es el impuesto al valor agregado que es equivalente al 13%
	
	double tmi;
	//la variable tmi significa total mas iva y nos servira para almacenar el valor de sumar el valor del iva con el total de la venta
	
	double tmdesc;
	//esta variable significa total menos descuento y nos servira para almacenar el valor de restar el total de la venta menos el descuento
	
	double numes;
	//la variable numes significa numeros de sacos y nos servira para alojar el numero de sacos que ingresara el cliente
	
	
	cout <<"///Bienvenido a agroexportadora salvadoreña///" << endl;
	//incertamos un titulo de bienvenida para el cliente
	
	cout <<"el precio de cada saco de cafe es de: $100.00" << endl;
	//declaramos el precio de cada saco de cafe que es de $100.00
	
	cout <<"¿cuantos sacos de cafe desea comprar?" << endl;
	//le preguntamos al cliente la cantidad de sacos de cafe que quiere obtener
	
	cin >>numes;
	//le decimos al compilador que almacene los datos que el cliente ingrese en la variable numes
	
	if (numes < 100){
		cout <<"no se hace descuento"<<endl;
		//aqui se hace la comparacion que si el numero de sacos a vender es menor a 100 sacos no se hara descuento
		
		tdv=numes*100;
		//el total de la venta se calculara al multiplicar el numero de sacos por el precio de cada saco de cafe
		
		iva=tdv*0.13;
		//el iva se calculara de multiplicar el total de la venta por el 13%
		
		tmi=tdv+iva;
		//aqui se sumara el total de la venta mas el iva para sacar el total de la venta
		//mas el iva que en este caso sera el total a pagar por el comprador ya que no se hace descuento
		
		cout <<"el total de la venta es $"<<tdv<<endl;
		
		cout <<"el valor del IVA es equivalente a: "<<iva<<endl;
		
		cout <<"el total a pagar: $"<<tmi<<endl;
		//aqui imprimimos el total de la venta, el iva y el total a pagar
	}
	else if (numes > 100 && numes < 200){
		//aqui comparamos la variable numes y le decimos al compilador que si numes es mayor que 100 y menor que 200 le aplique un descuento del 10% al total de
		//la venta y luego calcule el iva, el total mas iva y el total a pagar
		
		tdv=numes*100;
		
		desc=tdv*0.1;
		
		iva=tdv*0.13;
		
		tmi=tdv+iva;
		
		tmdesc=tmi-desc;
		
		cout <<"el total de la venta es: $"<<tdv<<endl;
		
		cout <<"el descuento es de 10% equivalente a: $"<<desc<<endl;
		
		cout <<"el valor del IVA es equivalente a: $"<<iva<<endl;
		
		cout <<"el total mas el IVA menos el descuento es: $"<<tmdesc<<endl;
	}
	else if (numes > 200 && numes < 250){
		//aqui comparamos la variable numes y le decimos al compilador que si numes es mayor que 200 y menor que 250 le aplique un descuento del 15% al
		//total de la venta y luego calcule el iva, el total mas iva y el total a pagar
		
		tdv=numes*100;
		
		desc=tdv*0.15;
		
		iva=tdv*0.13;
		
		tmi=tdv+iva;
		
		tmdesc=tmi-desc;
		
		cout <<"el total de la venta es: $"<<tdv<<endl;
		
		cout <<"el descuento es del 15% equivalente a: $"<<desc<<endl;
		
		cout <<"el valor del IVA equivalente a: "<<iva<<endl;
		
		cout <<"el total mas el IVA menos el descuentoes $"<<tmdesc<<endl;
	}
	else if (numes > 250 && numes < 300){
		//aqui comparamos la variable numes y le decimos al compilador que si numes es mayor que 250y menor que 300 le aplique un descuento del 20% al total
		//de la venta y luego calcule el iva, el total mas iva y el total a pagar
		
		tdv=numes*100;
		
		desc=tdv*0.2;
		
		iva=tdv*0.13;
		
		tmi=tdv+iva;
		
		tmdesc=tmi-desc;
		
		cout <<"el total de la venta es: $"<<tdv<<endl;
		
		cout <<"el descuento es del 20% equivalente a: $"<<desc<<endl;
		
		cout <<"el valor del IVA es equivalente a: "<<iva<<endl;
		
		cout <<"el total mas el IVA menos el descuento es: $"<<tmdesc<<endl;
	}
	else if (numes >= 300){
		//aqui comparamos la variable numes y le decimos al compilador que si numes es mayor o igual a 300 le aplique un descuento del 25% al total de la
		//venta y luego calcule el iva, el total mas iva y el total a pagar
		
		tdv=numes*100;
		
		desc=tdv*0.25;
		
		iva=tdv*0.13;
		
		tmi=tdv+iva;
		
		tmdesc=tmi-desc;
		
		cout <<"el total de la venta es: $"<<tdv<<endl;
		
		cout <<"el descuento es del 25% equivalente a: $"<<desc<<endl;
		
		cout <<"el valor del IVA es equivalente a: "<<iva<<endl;
		
		cout <<"el total mas el IVA menos el descuento es: $"<<tmdesc<<endl;
	}
	return 0;
	//en este apartado le devolvemos el control a la consola
}
