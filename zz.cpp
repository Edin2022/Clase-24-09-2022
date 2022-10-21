#include <iostream>
 
using namespace std;
 
int main()
{
    int numero; //numero de vehiculo
    string nombre; //nombre del cliente
    string telefono; //telefono del cliente
    string inicio; //lugar de inicio del viaje
    string destino; //lugar de destino
    int distancia; //kilometros recorridos
    string opcion;
    int precio;
 
    do {
        cout << "Numero de vehiculo: ";
        cin >> numero;
        cout << "Nombre del cliente: ";
        cin >> nombre;
        cout << "Telefono del cliente: ";
        cin >> telefono;
        cout << "Lugar de inicio del viaje: ";
        cin >> inicio;
        cout << "Lugar de destino: ";
        cin >> destino;
        cout << "Cantidad de kilometros: ";
        cin >> distancia;
 
        if ((distancia >= 1) && (distancia < 10))
            precio = distancia * 500;
        else if ((distancia >= 10) && (distancia < 25))
            precio = distancia * 250;
        else if ((distancia >= 25) && (distancia < 100))
            precio = distancia * 125;
        else
            precio = distancia * 75;
 
        cout << "Total del flete: " << precio << endl;
        cout << "Desea continuar ingresando fletes s/n: " << opcion;
        cin >> opcion;
 
    } while (opcion == "s");
 
    return 0;