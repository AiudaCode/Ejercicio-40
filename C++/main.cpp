#include <iostream>
#include "Triangulo.h"

using namespace std;

int main(void)
{
    float a,b,c;

    // se crea un objeto de la clase Ecuacion (Instanciaciación)
    Triangulo *obj=new Triangulo();

    cout << "====INTRODUZCA LAS LONGITUDES DEL TRIANGULO====" << endl << endl;
    // se pide el primer valor
    cout << "Digite longitud A:" << endl;
    cout << ">> ";
    cin >> a;
    // se encapsula la variable a
    obj->setValorA(a);

    // se pide el segundo valor
    cout << "Digite longitud B" << endl;
    cout << ">> ";
    cin >> b;
    // se encapsula la variable b
    obj->setValorB(b);

    // se pide el tercer valor
    cout << "Digite longitud C" << endl;
    cout << ">> ";
    cin >> c;
    // se encapsula la variable c
    obj->setValorC(c);
    cout << endl;

    if (((a+b) > c) && ((a+c) > b) && ((b+c) > a))
    {
        if ((a == b) && (b == c))
        {
            cout << "El triangulo es Equilatero." << endl << endl;

        }
        else if (((a == b) && (a != c)) || ((a == c) && (c != b)) || ((b == c)&& (c != a)) || ((c == a) && (a != b)))
        {
            cout << "El triangulo es Isoceles." << endl << endl;
        }
        else
        {
            cout << "El triangulo es Escaleno." << endl << endl;
        }
        // se muestra el area del triangulo
        cout << "El area del triangulo es: " << obj->area() << endl;
    }
    else
    {
        cout << "Las longitudes no forman un triangulo" << endl;
    }
}
