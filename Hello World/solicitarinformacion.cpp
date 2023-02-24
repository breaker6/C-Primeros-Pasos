#include <iostream>
#include <string.h>

//Necesario para poder usar strings
using namespace std;

int main()
{
    string nombre;
    int edad;
    cout << "Introduce tu nombre: ";
    //getline nos permite coger varios valores
    getline(cin, nombre);
    cout << "Introduce tu edad: ";
    //cin nos permite guardar un valor en una variable
    cin >> edad;
    cout << "Bienvenido " << nombre << ". Tienes " << edad << " años" << endl;
}