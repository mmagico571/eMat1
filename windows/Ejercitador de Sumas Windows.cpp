#include<iostream>
#include<windows.h>
#include<cmath>
#include<time.h>
using namespace std;
//FUNCION PROTOTIPO PARA MODIFICAR EL TAMAÑO DE LA CONSOLA
bool AjustarVentana(int Ancho, int Alto);
int main()
{
    //TAMAÑO DE LA CONSOLA
    AjustarVentana(15,4);
    //VARIABLES DEL SYSTEMA
	//tamaño del arreglo o cantidad de sumandos.
	int max=10;
	//arreglo que guarda los sumandos.
	int a[max];
	//numero de repeticiones que se ejecuta el ejercicio de sumar.
	int repeticiones=5;
	//toma el tiempo del sistema para inicializar numeros aleatorios.
	srand(time(NULL));
	//primera pausa de 5 segundos
	cout<<"Hola";
	Sleep(2000);
	system("cls");
	//inicia el ciclo de sumas
	for(int j=1;j<=repeticiones;j++)
	{
		//variable que guarda la suma.
		int suma=0;
		//crea valores de los sumandos y los guarda en un arreglo.
		for(int i=1; i<=max;i++)
		{
			a[i]=1+rand()%(20 - 1);
		}
		//muestra los sumandos individualmente durante 2 segundo.
		for(int i=1; i<=max;i++)
		{
            cout<<"Repeticion "<<j<<"\n\n";
			cout<<"Sumando "<<i<<"-> "<<a[i]<<"\n";
			Sleep(1500);
			system("cls");
		}
		// suma los valores contenidos dentro del arreglo
		for(int i=1;i<=max;i++)
		{
			suma=suma+a[i];
		}
		//muestra el resultado de la suma
		Sleep(2000);
		cout<<"suma= "<<suma<<"\n";
		Sleep(8000);
		system("cls");
	}
	system("pause");
}
    
    //FUNCION PARA MODIFICAR EL TAMAÑO DE LA CONSOLA
    bool AjustarVentana(int Ancho, int Alto) {
	_COORD Coordenada;
	Coordenada.X = Ancho;
	Coordenada.Y = Alto;
	_SMALL_RECT Rect;
	Rect.Top = 0;
	Rect.Left = 0;
	Rect.Right = Ancho - 1;
	Rect.Bottom = Alto - 1;
	// Obtener el handle de la consola
	HANDLE hConsola = GetStdHandle(STD_OUTPUT_HANDLE);
	// Ajustar el buffer al nuevo tamaño
	SetConsoleScreenBufferSize(hConsola, Coordenada);
	// Cambiar tamaño de consola a lo especificado en el buffer
	SetConsoleWindowInfo(hConsola, TRUE, &Rect);
	return TRUE;
}
