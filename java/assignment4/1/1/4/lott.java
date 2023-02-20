//Shivam Kumar Gupta
//20214082
//CSE-D
import java.util.*;
class Lottery{
    Random r=new Random();
    Scanner s=new Scanner(System.in);
    int lottery[]=new int[5];
    int data[]=new int[5];
    int c[]=new int[5];
    int x=0;
    int[] getarray(int data[]){
        for(int i=0;i<data.length;i++){
            if(data[i]==lottery[i]){
                c[x++]=data[i];
            }
        }
        return lottery;      
    }
    void result(){
        if(x!=0){
            System.out.print("Common Element :: ");
            for(int i=0;i<x;i++){
                System.out.print(c[i]+" ");
            }
            System.out.println();
        }
        if(x==5){
            System.out.println("Congratulation You win Lottery");
        }
        else{
            System.out.println("Better luck next time");
        }
    }
    Lottery(){
        for(int i=0;i<5;i++){
            lottery[i]=r.nextInt(10);
        }
    }
}
public class lott {
    public static void main(String ar[]){
        Scanner s=new Scanner(System.in);
        Lottery l=new Lottery();
        int a[]=new int[5];
        System.out.println("Enter your 5 digit lottery number");
        for(int i=0;i<5;i++){
            a[i]=s.nextInt();
        }
        int b[]=l.getarray(a);
        System.out.println("Real lottery number");
        for(int i=0;i<5;i++){
            System.out.print(b[i]+" ");
        }
        System.out.println();
        l.result();
    }
}
//output
/*
Enter your 5 digit lottery number
3
4
3
3
3
Real lottery number
4 9 3 7 1 
Common Element :: 3
Better luck next time
*/
