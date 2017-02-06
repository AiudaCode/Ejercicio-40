#ifndef TRIANGULO_H
#define TRIANGULO_H


class Triangulo
{
    public:
        Triangulo();
        virtual ~Triangulo();
        // se declaran los metodos publicos
        void setValorA(float dat);
        float getValorA();
        void setValorB(float dat);
        float getValorB();
        void setValorC(float dat);
        float getValorC();
        float area();
    protected:

    private:
        // se declaran los atributos privados
        float l1;
        float l2;
        float l3;
};

#endif // TRIANGULO_H
