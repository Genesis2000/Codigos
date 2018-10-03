//Programa creado por: Genesis de los Angeles Villanueva Solis
//Carnet: VS18009

#include <iostream>
#include <windows.h>

using namespace std;
int main(int argc, char** argv) {
	int num;
	int fact=1;
	int z;
	do
	{
	cout<<"ingrese el numero:";
	cin>>z;
}while (num < 0);

//if (num >= 0 && num <=9){

	for (int i=1; i<=z; i++){
		fact=fact*i;
	//}
	}
	cout << "factorial ="<<fact<<endl;
		  
	
	system("pause");
	return 0;
}
