#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int cantidadNotas;//cantidad de notas que el usuario va a digitar, ademas nos servira para calcular el promedio
	float promedio;//promedio
	float nota;//almacena cada una de las notas que digite el usuario
	float sumaNotas;//suma de notas para calcular el promedio
	vector <int> notas; //vector para almacenar las notas;
	int i = 0; //indice que nos va a ayudar en los ciclos
	
	cout << "Bienvenid@" << endl;
	cout << "Por favor ingrese el numero de notas que desea digitar: ";
	cin >> cantidadNotas;
	
	while(cantidadNotas > i)
	{
		cout << "Digite la nota " << i + 1 << ": " << endl;
		cin >> nota;
		if (nota >= 0.0 and nota <= 5.0)
		{
			notas.push_back(nota);
		}else
		{
			cout << "La nota debe estar entre 0.0 y 5.0" << endl; 
			break;
		}
		
		i++;
	}
	
	for (int i = 0; i < notas.size(); i++)
	{
		sumaNotas += notas[i];
	}
	
	promedio = sumaNotas/cantidadNotas;
	
	cout << "El promedio de sus notas es: " << promedio << endl;
	
}
//Autor: Jose Manuel Palma Oquendo 
