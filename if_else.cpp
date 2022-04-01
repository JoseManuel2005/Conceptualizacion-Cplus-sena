//Importamos las librerias
#include <iostream>
using namespace std;
//main
int main()
{
	int edad;//declaracion del dato que le vamos a pedir al usuario
	
	cout << "Bienvenido" << endl;
	cout << "Cual es la edad de tu hijo: ";
	cin >> edad;
	
	if (edad >= 0 && edad <= 6)
	{
		cout << "Su hijo pertenece a la primera infancia" << endl;
	} else if (edad > 6 && edad <= 12)
	{
		cout << "Su hijo pertenece a la segunda infancia" << endl;
	} else if (edad > 12 && edad <= 18)
	{
		cout << "Su hijo es un adolescente" << endl;
	}else
	{
		cout << "Edad no validad" << endl;
	}
}

