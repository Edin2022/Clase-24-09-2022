#include <iostream>

using namespace std;

main(){

int numero;
int multiplicacion;

cout << "Ingrese el numero de la tabla que desee: " <<endl;

cin >> numero;

for (int i =1; i<=10; i++)
{

    multiplicacion = i * numero;
    cout << numero << " x " << i << " = " << multiplicacion <<endl;


}

system ("PAUSE");
return 0;

}