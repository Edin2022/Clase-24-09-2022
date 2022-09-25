#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{

// it = 50 es el inicio,  i <= 100 es hasta donde va a llegar(numero positivos), i + = 1 Que va a sumar 1 en 1

// for es  una estructura la cual te permite ejecutar una o varias líneas indicando un valor inicial, la condición que debe cumplir para seguir en el ciclo y el incremento de cada iteración.

for (int i = 0; i <= 100; i += 1)
{

    cout << i << endl;
}


system ("Pause");

return 0;
}