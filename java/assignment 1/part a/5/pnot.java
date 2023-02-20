//Shivam Kumar Gupta
//20214082
//Group CSE-D
import java.util.Scanner;
public class pnot{
public static void main(String[] args){
System.out.println("Enter a number");
Scanner s=new Scanner(System.in);
int b=s.nextInt();
int a=0;
for(int i=2;i<b;i++){
if(b%i==0)
a++;
}
if(a==0)
System.out.println("Number is prime");
else
System.out.println("number is not prime");
}
}
//output//
/*
Enter a number
25
number is not prime
*/
