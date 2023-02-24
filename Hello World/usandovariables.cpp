#include <iostream>

//Necesario para poder usar strings
using namespace std;

int main()
{
    string nombre = "Pablo";
    int edad = 35;
    edad = edad + 1;
    //cout muestra un mensaje por pantalla. std::endl da un salto de linea
    cout << "Me llamo " << nombre << " y tengo " << edad << std::endl;
    
    return 0;
}