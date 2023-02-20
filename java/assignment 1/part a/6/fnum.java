//Shivam Kumar Gupta
//20214082
//Group CSE-D
import java.util.Scanner;
class fnum{
public static void main(String[] args){
System.out.println("Enter a number till u want to print Fibonacci series");
Scanner s=new Scanner(System.in);
int a=s.nextInt();
int b=0;
int c=1;
for(int i=0;i<=a;i++){
int d=b+c;
System.out.print(b+" ");
b=c;
c=d;
}
}
}
//output//
/*
Enter a number till u want to print Fibonacci series
12
0 1 1 2 3 5 8 13 21 34 55 89 144
*/

