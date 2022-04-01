#include <iostream> //importa la librerario iostream que permite hacer outputs e inputs.
#include <cstdlib>// se incluye la libreria cstdlib para que funcione el macro EXIT_SUCCESS
using namespace std; //permite usar el espacio standar.

int main() //declaracion de la funcion principal main
{
 int a, b; //declaracion de dos variables en una misma linea 
 cout << "Ingresa el primer numero"<<endl; //cout nos permite imprimir en consola el texto que anidemos con "<<", aqui estamos pidiendole un dato al usuario por consola, endl representa un salto de linea
 cin >> a; //lee el dato que el usuario acaba de introducir por consola y lo almacena en la variable a. 
 cout << "Ingresa el segundo numero"<<endl; //Pide al usuario el segundo numero por consola
 cin >> b; //lee el segundo numero digitado por el usuario y lo almacena en la variable de tipo entero b.
 cout <<"La suma de los numeros es: "<< a+b <<endl; //Imprime en consola la suma de los valores almacenados en las variables a y b.
 cout <<"La resta de los numeros es: "<< a-b <<endl; //Imprime en consola la resta de los valores almacenados en las variables a y b.
 cout <<"La multiplicacion de los numeros es: "<< a*b <<endl; //imprime en consola el producto de los valores almacenados en a y b.
 cout <<"La division de los numeros es: "<< a/b <<endl; //Imprime en consola la division de a y b.
 cout <<"El residuo es: "<< a%b <<endl; //aqui usa el operador de modulo (%) para imprimir en consola el residuo de dividir a y b.

 system("pause");//Pausa en el programa, una vez finalice el programa este espera a que el usuario precione cualquier tecla. 
 return EXIT_SUCCESS;//Representa que la salida o el programa fue ejecutado correctamente 
}

