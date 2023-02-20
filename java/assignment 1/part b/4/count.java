//Shivam Kumar Gupta
//20214082
//Group CSE-D
import java.util.Scanner;
class count{
    public static void main(String[] args){
        int b=0;
        System.out.println("Enter a number");
        Scanner s=new Scanner(System.in);
        int a=s.nextInt();
        System.out.println("number of digit in "+a+" is  : ");
        while(a>0){
            b++;
            a=a/10;
        }
        System.out.println(b);
    }
    
}

//output//
/*
C:\Users\shiva\Desktop\java>java count
Enter a number
78456
number of digit in 78456 is  :
5
*/
