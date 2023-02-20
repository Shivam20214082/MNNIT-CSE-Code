import java.util.Scanner;
import java.math.*;

public class peri {
    public static void main(String[] args){
        Scanner s=new Scanner(System.in);
        System.out.println("enter the length of rectangle");
        float a= s.nextFloat();
        System.out.println("enter the Breath of rectangle");
        Double b= s.nextDouble();
        int d=(int) Math.round(b);
        int per=2*((int)a + d);
        System.out.println("Perimeter is : "+per);
    } 
}

//output
/*
enter the length of rectangle
15
enter the Breath of rectangle
12
Perimeter is : 54 
*/