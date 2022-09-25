//Un hotel necesita un programa que le permita calcular la tarifa de habitación según el numero de personas (Precio por personas Q85), también debe calcular lo siguiente:

#include <iostream>

using namespace std;

int main()
{

// Edin Josué Hernández Moscoso, 0909-22-2183

float total, iva, inguat;
int habitacion, personas, precio;


cout << "Ingrese el numero de Personas" << "\n";
cin >> personas;

precio = 85;

habitacion = precio * personas;

iva = habitacion * 0.12;

inguat = habitacion * 0.10;

total = habitacion + iva + inguat;


cout << "\nTotal de personas es: " << habitacion <<endl;

cout << "\nTotal de habitacion con iva es: " << iva <<endl;

cout << "\nTotal de habitacion con inguat es: " << inguat <<endl;

cout << "\nTotal de una habitacion es de: " << total <<endl;



system ("Pause");

return 0;
}