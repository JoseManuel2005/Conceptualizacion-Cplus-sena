#include <iostream>
using namespace std;

int main()
{
	float nota1, nota2, nota3, nota4;
	float notaFinal;
	
	cout << "Bienvenido a la calculadora de promedio" << endl;
	
	cout << "Digite su primera nota: ";
	cin >> nota1;
	
	cout << "Digite su segunda nota: ";
	cin >> nota2;
	
	cout << "Digite su tercera nota: ";
	cin >> nota3;
	
	cout << "Digite su cuarta nota: ";
	cin >> nota4;
	
	notaFinal = (nota1 + nota2 + nota3 + nota4)/4;
	
	if (notaFinal >= 3.5 && notaFinal <= 5.0)
	{
		cout << "Aprobado" << endl;
	 }else
	 {
	 	if (notaFinal >= 3.0 && notaFinal <= 3.5)
	 	{
	 		cout << "En este momento no tiene aprobada la materia de tecnologia, pero tiene la oportunidad de recuperar." << endl;
	 	}else{
	 		
		 	cout << "No aprobado" << endl;
		}
	 
	}
}

//Autor: Jose Manuel Palma Oquendo 

