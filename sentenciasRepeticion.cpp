#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int decision; //1: desea seguir digitando mas notas, 0: no desea seguir digitando mas notas;
	
	cout << "Bienvenido a la calculadora de promedio" << endl;
	
	while(decision <= 1)
	{
		float notaFinal;
		float nota;
		float sumaNotas;
	
	for (int i = 0; i < 4 ; i++)
	{
		cout << "Digite la nota " << i + 1 << ": ";
		cin >> nota;
		sumaNotas += nota;
	}
	
	notaFinal = sumaNotas/4;
	
	if (notaFinal >= 3.5 && notaFinal <= 5.0)
	{
		cout << "Aprobado" << endl;
	
	 }else
	 {
	 	if (notaFinal >= 3.0 && notaFinal <= 3.5)
	 	{
	 		cout << "En este momento no tiene aprobada la materia de tecnologia, pero tiene la oportunidad de recuperar." << endl;
	 		
		}else
		{
	 		
		 	cout << "No aprobado" << endl;
		}
	 
	}
	
	decision++;
	sumaNotas = 0;
	
	cout << "Desea ingresar la nota de otro estudiante? (Si:1 No:0): ";
	cin >> decision;
	
	if (decision == 0)
	{
		break;
	} 
}

}

//Autor: Jose Manuel Palma Oquendo 

