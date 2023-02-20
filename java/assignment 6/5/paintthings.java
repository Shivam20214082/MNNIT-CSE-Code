//Shivam kumar Gupta
//20214082
// CSE-D
abstract class shape{
    abstract double Area();
    abstract String tostring();
    String  shapename;
}
class sphere extends shape{
    private double pi=22/7;
    private double radius;
    String shapename= "Sphere";
    double Area(){
        // System.out.println("Surface Area of circle having radius "+radius+" is "+4*pi*radius*radius);
        return 4*pi*radius*radius;
    }
    sphere(double radius){
        this .radius=radius;
    }
    String tostring(){
        return shapename;
    }
}
class rectangle extends shape{
    private double length,breadth;
    String shapename="Rectangle";
    public double Area(){
        // System.out.println("Area of Rectangle having length "+length+" and breadth"+breadth+" is "+length*breadth);
        return length*breadth;
    }
    rectangle(double length,double breadth){
        this.length=length;
        this.breadth=breadth;
    }
    String tostring(){
        return shapename;
    }

}
class cylinder extends shape{
    private double pi=22/7;
    private double radius;
    private double height;
    String shapename= new String("Cylinder");
    double Area(){
        // System.out.println("Surface Area of Cylinder having radius "+radius+"and hight "+height+" is "+pi*radius*height);
        return pi*height*radius;
    }
    cylinder(double radius,double height){
        this .radius=radius;
        this.height=height;
    }
    String tostring(){
        return shapename;
    }
}

class paint{
    double coverage;
    double a_paint(shape s){
        return s.Area()/coverage;
    }
    paint(double coverage){
        this.coverage=coverage;
    }
}

public class paintthings{
    public static void main(String arg[]){
        sphere c=new sphere(15.0);
        rectangle r=new rectangle(20.0, 35.0);
        cylinder cy =new cylinder(10.0, 30.0);
        paint p=new paint(0.3);
        System.out.println("Amount of Paint required for "+c.tostring()+" is "+p.a_paint(c)+" litre");
        System.out.println("Amount of Paint required for "+r.tostring()+" is "+p.a_paint(r)+" litre");
        System.out.println("Amount of Paint required for "+cy.tostring()+" is "+p.a_paint(cy)+" litre");
    }
}

//output
/*
Amount of Paint required for Sphere is 9000.0 litre
Amount of Paint required for Rectangle is 2333.3333333333335 litre
Amount of Paint required for Cylinder is 3000.0 litre
 */