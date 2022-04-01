#include <iostream>
using namespace std;

int main()
{
	int a; //declaracion de la variable
	
	cout << "Por favor digite un numero entero: " << endl; //pide el numero al usuario
	cin >> a; //lee el numero y lo asigna a la variable
	
	cout << "Tabla de multiplicar de " << a << endl; 
	//ciclo for, declaramos un indice i el cual va aumentando de 1 en 1 hasta 10 y cada vez lo multiplica por a;
	for(int i = 0; i <= 10; i ++)
	{
		int producto = a * i; //variable auxiliar para almacenar el producto e imprimirlo en consola
		
		cout << a << "*" << i << " = " << producto << endl;
	}
	
	return 0;
}
