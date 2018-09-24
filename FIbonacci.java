
package fibonacci;

/** Fibonacci
 * Este codigo calcula en nesimo termino de la serie de Fibonacci donde se produce
 * Overflow en los tipos de variable entero (byte,short,int y long).
 * @author jaime
 */
public class FIbonacci {
    
    static void Fibobyte(){
        long n=0;
        byte n1=0;
        byte n2=1;
        byte nesimo=0;
        while (nesimo >= 0){
            nesimo=(byte) (n1+n2);
            n1=n2;
            n2=nesimo;
            n++;
        }
        System.out.println("En el tipo de variable byte se produce Overflow en el termino: "+n);
    }
    static void Fiboshort(){
        long n=0;
        short n1=0;
        short n2=1;
        short nesimo=0;
        while (nesimo >= 0){
            nesimo=(short) (n1+n2);
            n1=n2;
            n2=nesimo;
            n++;
        }
        System.out.println("En el tipo de variable short se produce Overflow en el termino: "+n);
    }
    static void Fiboint(){
        long n=0;
        int n1=0;
        int n2=1;
        int nesimo=0;
        while (nesimo >= 0){
            nesimo=(int) (n1+n2);
            n1=n2;
            n2=nesimo;
            n++;
        }
        System.out.println("En el tipo de variable int se produce Overflow en el termino: "+n);
    }
    static void Fibolong(){
        long n=0;
        long n1=0;
        long n2=1;
        long nesimo=0;
        while (nesimo >= 0){
            nesimo=(long) (n1+n2);
            n1=n2;
            n2=nesimo;
            n++;
        }
        System.out.println("En el tipo de variable long se produce Overflow en el termino: "+n);
    }
    public static void main(String[] args) {
        Fibobyte();
        Fiboshort();
        Fiboint();
        Fibolong();
    }
}
