#include <iostream>
#include <string.h>

//Necesario para poder usar strings
using namespace std;

int main()
{
    string nombre = "Homer Simpson";
    string apellido = nombre.substr(6, 13);

    cout << apellido << endl;
}