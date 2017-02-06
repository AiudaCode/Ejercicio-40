public class Triangulo
{
    // declaramos los atributos privados
    private float l1;
    private float l2;
    private float l3;
    
    
    public Triangulo()
    {
        // al inicializar el constructor se definiran los valores iniciales de los atributos
        l1=0;
        l2=0;
        l3=0;
    }

    // metodos Setters y Getters de los atributos de la clase
    public void setValorA(float val)
    {
        l1 = val;
    }
    public float getValorA()
    {
        return l1;
    }
    public void setValorB(float val)
    {
        l2 = val;
    }
    public float getValorB()
    {
        return l2;
    }
    public void setValorC(float val)
    {
        l3 = val;
    }    
    public float getValorC()
    {
        return l3;
    }
    
    // metodo para hallar el aréa 
    public double area()
    {
        // declaramos una variable que almacena el semiperimetro del triangulo para poder utilizar los lados para obtener el area
        double s = (l1 + l2 + l3)/2;
        // se utiliza la formula de heron para calcular el area
        double area= Math.sqrt((s  * (s - l1) * (s - l2) * (s - l3)));
        // retornamos el resultado
        return area;
    }
}