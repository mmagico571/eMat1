/*
*DAR 2023
*
*
*/
#include<iostream>
#include<stdlib.h>
#include<unistd.h>
using namespace std;
int main()
{
    char continuar;
    //VARIABLES DEL SISTEMA
	//tamanio del arreglo o cantidad de sumandos.
	int max=5;
	//arreglo que guarda los sumandos.
	int a[max];
	//numero de repeticiones que se ejecuta el ejercicio de sumar.
	int repeticiones=5;
	//toma el tiempo del sistema para inicializar numeros aleatorios.
	srand(time(NULL));
	//inicia el ciclo 
	do{
	cout<<"################## EJERCITADOR DE SUMAS ##################"<<endl;
	sleep(2);
	system("clear");
	//inicia el ciclo de sumas
	for(int j=1;j<=repeticiones;j++)
	{
		//variable que guarda la suma.
		int suma=0;
		//crea valores de los sumandos y los guarda en un arreglo.
		for(int i=1; i<=max;i++)
		{
			//establecemos el rango para los sumandos
			a[i]=1+rand()%(11 - 1);
		}
		//muestra los sumandos individualmente durante 2 segundo.
		for(int i=1; i<=max;i++)
		{
            cout<<"Repeticion "<<j<<"\n\n";
			cout<<"Sumando "<<i<<"-> "<<a[i]<<"\n";
			sleep(1);
			system("clear");
		}
		// suma los valores contenidos dentro del arreglo
		for(int i=1;i<=max;i++)
		{
			suma=suma+a[i];
		}
		//muestra el resultado de la suma
		sleep(3);
		cout<<"suma= "<<suma<<"\n";
		sleep(3);
		system("clear");
	}
	cout<<"Precione cualquier tecla para realizar otro repaso o digite 0 para salir de la aplicacion: ";
	cin>>continuar;
	}while(continuar!='0');
}
