//Shivam Kumar Gupta
//20214082
//Group CSE-D
import java.util.Scanner;
class pfind{
    public static void main(String[] args){
        int a,b,d=0;
        System.out.println("Enter two number");
        Scanner s=new Scanner(System.in);
        a=s.nextInt();
        b=s.nextInt();
        System.out.println("prime number between them are:");
        for(int i=a;i<=b;i++){
            int c=0;
            for(int j=2;j<i;j++){
                if(i%j==0){
                    c++;
                }
            }
            if(c==0){
                System.out.print(i+" ");
                d++;
            }
        }
        if(d==0){
            System.out.println("No prime number is in between "+a+" and "+b);
        }
    }
}
//output//
/*
Enter two number
25
39
prime number between them are:
29 31 37
 */
