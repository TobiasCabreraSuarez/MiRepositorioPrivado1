#include <iostream>
using namespace std;

/*Ej 3.a: Realizar un programa que lea una velocidad en mts/seg y la transforme a
kmts/hr. El programa debe solicitar por pantalla un valor numérico, el luego el
usuario debe ingresar un valor, finalmente el programa debe mostrar por
pantalla el resultado de la conversión.*/

int main()
{
    float mts, seg, kmts, hr;
    cout << "Ingrese una velocidad en mts/seg para luego convertirla en kmts/hr: " << endl;
    cout << "Ingrese mts: ";
    cin >> mts;
    cout << "Ingrese seg: ";
    cin >> seg;
    kmts = (mts / 1000);
    hr = ((seg / 60) / 60);
    cout << endl;
    cout << "El dato ingresado de velocidad en mts/seg convertido a kmts/hr es: " << endl;
    cout << kmts << "/" << hr << endl;
    return 0;
}
