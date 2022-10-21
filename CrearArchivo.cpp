#include <iostream>
#include <stdlib.h>
#include <fstream> //Libreria para el manejo de archivo

using namespace std;

void escribir (); //Funciona a crear mas adelante

//Cuerpo del Programa

int main(){


    escribir ();

    system ("PAUSE");
    return 0;

}
//Funcion para crear el archivo

void escribir ()
{
    ofstream miarchivo; // Variabpe tipo de archivo (Sirve para repsentar el flujo de creacion y escritura en el archivo a crear)
    
    //Abrir el archivo, perso si no existe el archivo se crea y se le nombra con el texto dentro de las comillas

    miarchivo.open ("Mi Primer Archivo txt", ios:: out);

    if (miarchivo.fail()) //
    {
        cout << "Error al abrir el archivo";
        exit(1);

    }
    miarchivo <<"Hoy es un dia genial";

    miarchivo.close();





}