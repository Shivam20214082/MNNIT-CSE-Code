import java.util.Scanner;
class si{
    public static void main(String[] args){
        Scanner s=new Scanner(System.in);
        System.out.println("Enter the value of principal");
        int a=s.nextInt();
        System.out.println("Enter the value of rate");
        int b=s.nextInt();
        System.out.println("Enter the value of time");
        int c=s.nextInt();
        System.out.println("Simple intrest is "+a*b*c*0.01);
       
    }
}

//output//
/*
Enter the value of principal
1000
Enter the value of rate
14
Enter the value of time
2
Simple intrest is 280.0
 */