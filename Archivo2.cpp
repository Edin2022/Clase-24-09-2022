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
// Funcion para crear el Archivo
void escribir()
{
    ofstream miarchivo;
    string nombre archivo;
    string texto_aarchivo;

    cout<< "\nEscrivir el nombre para el arhivo:";
    getline(cin, nombre, archivo);
    miarchivo.open(nombre_archivo.c_str(), ios::out);

    if (miarchivo.fail ())

    {
        cout <<"Eror al abrir el archivo";
        esit(1);



    }

    cout <<"\n Escribir el texto a guardar en el archivo:"; //Mensaje en Pantalla
    getline (cin, texto_archivo); //Capturamos el texto qeu escriba el usuario para escribirlo

    miarchivo << texto_archivo;

    miarchivo.close(); 


}