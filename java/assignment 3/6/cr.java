import java.util.Scanner;
class circle{
    double r,pi=3.14159;
    void setRadius(){
        Scanner s=new Scanner(System.in);
        System.out.println("Enter radius");
        r=s.nextDouble();
    }
    double getRadius(){
        return r;
    }
    double getArea(){
        return pi*r*r;
    }
    double getDiameter(){
        return r/2;
    }
    double getcircumference(){
        return 2*pi*r;
    }
    circle(double a){
        r=a;
    }
    circle(){
        r=0.0;
    }
}
class cr{
    public static void main(String a[]){
        circle c=new circle();
        c.setRadius();
        System.out.println("Radius is: "+c.getRadius()+"\t\t Dimeter is: "+c.getDiameter()+"\nCircumference is: "+c.getcircumference()+"\t\tarea is: "+c.getArea());
    }

}

//output
/*
Enter radius
7
Radius is: 7.0           Dimeter is: 3.5
Circumference is: 43.98226              area is: 153.93791
 */