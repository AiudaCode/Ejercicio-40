#include "Triangulo.h"
#include "math.h"
Triangulo::Triangulo()
{
    // al inicializar el constructor se definiran los valores iniciales de los atributos
    l1 = 0;
    l2 = 0;
    l3 = 0;
}

Triangulo::~Triangulo()
{
    //dtor
}

void Triangulo::setValorA(float dat)
{
    l1 = dat;
}
float Triangulo::getValorA()
{
    return l1;
}

void Triangulo::setValorB(float dat)
{
    l2 = dat;
}
float Triangulo::getValorB()
{
    return l2;
}

void Triangulo::setValorC(float dat)
{
    l3 = dat;
}
float Triangulo::getValorC()
{
    return l3;
}

float Triangulo::area()
{
    // declaramos una variable que almacena el semiperimetro del triangulo para poder utilizar los lados para obtener el area
    float s = (val1 + val2 + val3)/2;
    // se utiliza la formula de heron para calcular el area
    float area= sqrt(s*(s-val1)*(s-val2)*(s-val3));
    // retornamos el resultado
    return area;
}
