#include <iostream>
#include <math.h>
using namespace std;

/*Ej 3.b: Confeccionar un programa que calcule la solución de una ecuación
cuadrática: y = ax^2 + bx + c
Realizar un adecuado análisis del problema, entendiendo los posibles
resultados que se puedan generar. Tener en cuenta en ambos casos
seleccionar los tipos de datos más adecuados*/

int main()
{
    float a, b, c, dis, x1, x2;
    cout << "Ingresar los valores de los coeficientes a, b y c de la siguiente expresion: ax^2 + bx + c" << endl;
    cout << "Ingresar valor de a: ";
    cin >> a;
    cout << "Ingresar valor de b: ";
    cin >> b;
    cout << "Ingresar valor de c: ";
    cin >> c;
    cout << endl;

    dis = (pow(b,2)-4*a*c);

    if(a != 0)
    {
        if(dis > 0)
        {
            x1 = (-b + sqrt(dis)) / (2*a);
            x2 = (-b - sqrt(dis)) / (2*a);

            cout << "Las raices son x1 = " << x1 << " y x2 = " << x2 << endl;
        }
        if(dis == 0)
        {
            x1 = (-b / (2*a));
            x2 = x1;

            cout << "Los valores de a, b y c ingresados hicieron que el discriminante sea igual a cero, por lo tanto x1 = x2 = " << x1 << endl;
        }
        if(dis < 0)
        {
            cout << "La ecuacion no tiene solucion en el conjunto de los numeros reales ya que el discriminante es menor a cero." << endl;
        }
    }
    else
    {
        cout << "No se pueden calcular raices ya que la ecuacion no es cuadratica sino lineal con coeficiente a = 0." << endl;
    }

    return 0;
}
