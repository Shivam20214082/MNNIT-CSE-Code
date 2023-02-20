//Shivam Kumar Gupta
//20214082
//Group CSE-D
import java.util.Scanner;
class anum{
public static void main(String[] args){
System.out.println("Enter a number");
Scanner s=new Scanner(System.in);
int a=s.nextInt();
int d=a;
int b=0;
for(int i=10;a>0;){
int c=a%i;
b+=c*c*c;
a=a/i;
}
if(b==d)
System.out.println("Given number is Armstrong number");
else
System.out.println("Given number is not an Armstrong number");
}
}
//output//
/*
Enter a number
145
Given number is not an Armstrong number
*/
