//calculo de la hipotenusa y la validacion de numeros positivos


#include <iostream> // Biblioteca  estandar que permite entradas / Salida en pantalla
#include <cmath>    // Biblioteca para funciones matematicas

using namespace std;

int maint()
{

float cateto1, cateto2, hipotenusa; // Declaracion de Variables de tipo decimal
    
cout << "Calcular la Hipotenusa " << endl;

cout << "Ingrese la medida de los catetos A & B" << endl;

cout << "Ingrese cateto A:" << endl; //mensaje en pantalla 
cin >> cateto1;           // Captura del valor ingresado por el usuario 

cout << "Ingrese cateto B:" << endl;
cin >> cateto2;

// Validar que los nuevos ingresados sean positivos

if (cateto1 >0 && cateto2 >0)   /// if es una condicion quiere decir (si)
{

   //La raiz cuadrada se escribe sprt

   //pow quiere deicr potencia como elevado

   hipotenusa = sqrt(pow(cateto1, 2.0) + pow(cateto2, 2.0));
   cout << "El valor de la hipotenusa es: " << hipotenusa << endl;

}

  // else significa de lo contrario si no se cumple la condicion

else
{
    cout << "Por favor debe ingresar solo numeros positivos" << endl;
}
    system("PAUSE");

    return 0;

}


