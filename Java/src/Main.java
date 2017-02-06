
import javax.swing.JOptionPane;

public class Main
{
    public static void main(String[] args)
    {
        // se crea un objeto de la clase Triangulo (Instanciaciación)
        Triangulo obj = new Triangulo();
        
        float a,b,c;
        // se pide el valor de A
        a = Float.parseFloat(JOptionPane.showInputDialog("Digite el valor de A"));
        // se encapsula la variable a
        obj.setValorA(a);
              
        // se pide el valor de B
        b = Float.parseFloat(JOptionPane.showInputDialog("digite el valor de B"));
        // se encapsula la variable b
        obj.setValorB(b);
        
        // se pide el valor de C
        c = Float.parseFloat(JOptionPane.showInputDialog("Digite el valor de C"));
        // se encapsula la variable c
        obj.setValorC(c);
        //Se muestra el resultado del area y el tipo de triangulo
        
        if(((a + b) > c) && ((a + c) > b) && ((b + c) > a))
        {
            if((a == b) && (b == c))
            {
                JOptionPane.showMessageDialog(null,"El triangulo es Equilatero." + "\n" + "Area: " + obj.area());

            }
            else if(((a == b) && (a != c)) || ((a == c) && (c != b)) || ((b == c)&& (c != a)) || ((c == a)&&(a != b)))
            {
                JOptionPane.showMessageDialog(null,"El triangulo es Isoceles." + "\n" + "Area: " + obj.area());
            }
            else
            {
                JOptionPane.showMessageDialog(null,"El triangulo es Escaleno." + "\n" + "Area: " + obj.area());
            }
        }
        else 
        {
            JOptionPane.showMessageDialog(null,"Las longitudes no forman un triangulo.");
        }
    }
}
