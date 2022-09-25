//Calcular salaio de un trabajador

#include <iostream>

using namespace std;

int main()
{

Char nombre[50];
string numero_de_empleado;
int dias_tabajados;
float tarifa_dias = 0;
int horas_trabajadas; 
float tarifa_horas = 0;
float salario1;
float salario2;




cout << "Ingrese el nombre del trabajador" <<"\n";
cin >> nombre;

cout << "Ingrese el numero del trabajador" <<"\n";
cin >> numero_de_empleado;

cout << "Ingrese la Cantidad de dias Trabajados" <<"\n";
cin >> dias_tabajados;

cout << "Ingrese la Cantidad de horas Trabajados" <<"\n";
cin >> horas_trabajadas;


tarifa_dias<- 75.25;
tarifa_horas<-14.25;

salario1 = dias_tabajados*tarifa_dias;
salario2 = horas_trabajadas*tarifa_dias;


cout << "\n El nombre del trabajador es: "<<nombre <<endl;

cout << "\n El numero del trabajador es: "<<numero_de_empleado <<endl;

cout << "\n El total de las horas trabajadas en salario es : "<<salario1 <<endl;

cout << "\n El total de los dias trabajados en salario es: "<<salario2 <<endl;

system ("Pause");

return 0;

}