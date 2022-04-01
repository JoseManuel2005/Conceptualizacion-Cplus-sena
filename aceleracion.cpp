#include <iostream>
using namespace std;

int main()
{
	//declaracion de las variables tipo float porque podemos manejar datos decimales
	float velocidadInicial;
	float velocidadFinal;
	float tiempo;
	float aceleracion; //formula para aceleracion
	
	//Pedir los datos al usuario
	
	cout << "Bienvenido a la calculadora de aceleracion de un vehiculo" << endl;
	
	cout << "Introduce la velocidad inicial: ";
	cin >> velocidadInicial;
	
	cout << "Introduce la velocidad final: ";
	cin >> velocidadFinal;
	
	cout << "Introduce el tiempo que tardo en recorrer la distancia el vehiculo: ";
	cin >> tiempo;
	
	aceleracion = (velocidadFinal - velocidadInicial)/tiempo;
	
	cout << "La aceleracion del vehiculo es: " << aceleracion << endl;
	
	return 0;
}
