//Segundo Parcial

// La empresa M&G de servicio de transporte de paquetería, está solicitando los servicios del desarrollo de un programa en C++ para el cálculo del valor a pagar por el usuario por el traslado del paquete.

# include <iostream>

using namespace std;

int main(void)
{

// Edin Hernandez 0909-22-2183

// Peso --- 2.50 kilogramos
// Distancia 0.13 kilomentos

int opcion;
double peso, kilogramos, distancia, kilometros;


cout << "Ingrese una opcion" <<endl;

cout << "1. Peso a kilogramos" <<endl;

cout << "2. Distancia a kilometros" <<endl;

cin >> opcion;


switch (opcion)
{
case 1:
       cout << "Peso a kilogramos" << endl;
       cout << "Ingrese la cantidad de peso a convertir: " << endl;
       cin >> peso;
       kilogramos = peso * 2.50;
       cout << peso <<"peso equiva a " << kilogramos <<"kilogramos "<<endl;

    
case 2:
       cout << "Distancia a kilometros" << endl;
       cout << "Ingrese la cantidad de distancia a convertir: " << endl;
       cin >> distancia;
       kilometros = distancia * 0.13;
       cout << distancia <<"distancia equiva a " << kilometros <<"kilometros "<<endl;

    


default:

       cout << "La opcion ingresada no es correctra " << endl;;
     
    break;
}




 system ("Pause");
 return 0;

}