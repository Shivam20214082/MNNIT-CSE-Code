import java.util.Scanner;
class the{
    int a,b;
    the(int a,int b){
        this.a=a;
        this.b=b;
    }
    void peri(){
        System.out.println("The perimeter of rectangle is "+2*(a+b));
    }
    void area(){
        System.out.println("Area of rectangle is "+a*b);
    }
}
class thee extends the{

    thee(int a, int b) {
        super(a, b);
    }

    void work(){
        super.area();
    }
}

class thier{

    public static void main(String[] args){
        int a,b;
        Scanner s=new Scanner(System.in);
        System.out.println("Enter two number");
        a=s.nextInt();
        b=s.nextInt();
        the sh=new the(a,b);
        sh.peri();
        thee shh=new thee(a,b);
        shh.work();
    }
}

//output
/*
Enter two number
5
4
The perimeter of rectangle is 18
Area of rectangle is 20
*/