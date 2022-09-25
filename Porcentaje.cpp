//Un hotel necesita un programa que le permita calcular la tarifa de habitación según el numero de personas (Precio por personas Q85), también debe calcular lo siguiente:

#include <iostream>

using namespace std;

int main()
{

// Edin Josué Hernández Moscoso, 0909-22-2183

float total, iva, inguat;
int personas, precio;


cout << "Ingrese el numero de Personas" << "\n";
cin >> personas;

precio = 85;

iva = 0.12;

inguat = 0.10;

total = personas * precio * iva * inguat;


total = precio * personas;

iva = total * 0.12;

inguat = total * 0.10;

total = total + iva + inguat;





cout << "\nTotal de ingresos es: " << total <<endl;



system ("Pause");

return 0;
}