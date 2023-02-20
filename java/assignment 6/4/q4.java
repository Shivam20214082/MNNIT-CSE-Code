/*
Create an interface Shape having two methods getArea and getPerimeter. Three classes,
Circle, Triangle, and Rectangle, implement the Shape interface, and override the two methods. 
Create a Test class to demonstrate each of these classes.
*/
interface shape{
    void getArea();
    void getPerimeter();
}
class circle implements shape{
    double pi=22/7;
    double radius;
    public void getArea(){
        System.out.println("Area of circle having radius "+radius+" is "+pi*radius*radius);
    }
    public void getPerimeter(){
        System.out.println("Perimeter of circle having radius "+radius+" is "+2*pi*radius);
    }
    circle(double radius){
        this.radius=radius;
    }
}
class rectangle implements shape{
    
    public void getArea(int length,int breadth){
        System.out.println("Area of Rectangle having length "+length+" and breadth"+breadth+" is "+length*breadth);
    }
    public void getPerimeter(int length,int breadth){
        System.out.println("Area of Rectangle having length "+length+" and breadth"+breadth+" is "+length*breadth);
    }
    @Override
    public void getArea() {}
    @Override
    public void getPerimeter() {}

}
class Triangle implements shape{
    
    public void getArea(int side){
        double b=0.433;
        System.out.println("Area of Equilateral Triangle having side "+side+" is "+b*side);
    }
    public void getPerimeter(int side){
        System.out.println("Perimeter of Equilateral Triangle having side "+side+" is "+3*side);
    }
    @Override
    public void getArea() {}
    @Override
    public void getPerimeter() {}
}
public class q4{
    public static void main(String arg[]){
        Triangle t=new Triangle();
        rectangle r=new rectangle();
        circle c=new circle(7);
        c.getArea();
        c.getPerimeter();
        t.getArea(7);
        t.getPerimeter(7);
        r.getArea(7,4);
        r.getPerimeter(7,4);

    }
}
//output
/*
Area of circle having radius 7 is 147.0
Perimeter of circle having radius 7 is 42.0
Area of Equilateral Triangle having side 7 is 3.031
Perimeter of Equilateral Triangle having side 7 is 21
Area of Rectangle having length 7 and breadth4 is 28
Area of Rectangle having length 7 and breadth4 is 28
*/