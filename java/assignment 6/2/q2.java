//Shivam Kumar Gupta
//20214082
//CSE-d
interface Vehicle{
    
    void changeGear(int a);
    void speedup(int a);
    void applyBrakes(int a);
}
class Bicycle implements Vehicle{
    int gear=0;
    int speed=0;
    public void changeGear(int a){
        gear=a;
    }
    public void speedup(int a){
        speed+=a;
    }
    public void applyBrakes(int a){
        speed-=a;
    }
    void display(){
        System.out.println("Speed of Bicycle is "+speed);
    }
}
class Bike implements Vehicle{
    int gear=0;
    int speed=0;
    public void changeGear(int a){
        gear=a;
    }
    public void speedup(int a){
        speed+=a;
    }
    public void applyBrakes(int a){
        speed-=a;
    }
    void display(){
        System.out.println("Speed of Bike is "+speed);
    }
}
public class q2{
    public static void main(String arg[]){
        Bike b=new Bike();
        Bicycle c=new Bicycle();
        b.changeGear(4);
        b.speedup(60);
        b.applyBrakes(15);
        c.changeGear(6);
        c.speedup(160);
        c.applyBrakes(35);
        b.display();
        c.display();

    }
}
//output
/*
Speed of Bike is 45
Speed of Bicycle is 125
*/