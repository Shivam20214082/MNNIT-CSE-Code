//Shivam Kumar Gupta
//20214082
//Group CSE-D
import java.util.Scanner;
class factor{
    public static void main(String[] args){
        System.out.println("Enter a number");
        Scanner s=new Scanner(System.in);
        int a=s.nextInt();
        System.out.println("Factor of "+a+" is  :");
        for(int i=1;i<a;i++){
            if(a%i==0){
                System.out.println(i);
            }
        }
    }
    
}

//output//
/*C:\Users\shiva\Desktop\java>java factor
Enter a number
32
Factor of 32 is  :
1
2
4
8
16
*/

