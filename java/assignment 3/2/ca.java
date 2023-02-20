
class car{
    int year_model;
    String make;
    int speed;
    void accelerate(){
        speed=speed+5;
    }
    void brake(){
        speed=speed-5;
    }
    void display(){
        System.out.println("The current speed is "+speed);
    }
    car(int a,String b){
        year_model=a;
        make=b;
    }
}

class ca{
    public static void main(String a[]){
        car c1=new car(2019,"Honda");
        System.out.println("\nDuring Acceleration");
        for(int i=0;i<5;i++){
            c1.accelerate();
            c1.display();
        }
        System.out.println("\nDuring Deacceleration");
        for(int i=0;i<5;i++){
            c1.brake();
            c1.display();
        }
    }
}

//output
/*

During Acceleration
The current speed is 5
The current speed is 10
The current speed is 15
The current speed is 20
The current speed is 25

During Deacceleration
The current speed is 20
The current speed is 15
The current speed is 10
The current speed is 5
The current speed is 0
 */