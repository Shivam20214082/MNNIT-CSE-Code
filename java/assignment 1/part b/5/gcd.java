//Shivam Kumar Gupta
//20214082
//Group CSE-D
import java.util.Scanner;

class gcd{

    public static int find(int a,int b){
        if(a>b){
            if(a%b==0){
                return b;
            }
            else 
            return find(b,a%b);
        }
        else 
        return find(b,a);
    }
    public static void main(String[] args){
        System.out.println("Enter two number");
        Scanner s=new Scanner(System.in);
        int a=s.nextInt();
        int b=s.nextInt();
        System.out.println("entered number is "+a+" and " +b);
        int c = find(a,b);
        System.out.println("GCD of "+a+ " and "+b+ " is "+c);
    }
    
}

//output//
/*
C:\Users\shiva\Desktop\java>java gcd
Enter two number
54
45
entered number is 54 and 45
GCD of 54 and 45 is 9
*/
