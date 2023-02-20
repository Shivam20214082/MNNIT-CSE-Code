//Shivam Kumar Gupta
//20214082
//Group CSE-D
import java.util.Scanner;
class plnum{
    public static void main(String[] args){
        int[] b;
        b = new int[10];
        int i=0,c=0;
        System.out.println("Enter your number");
        Scanner s=new Scanner(System.in);
        int a=s.nextInt();
        System.out.println("Your enter number is :"+a);
        while(a>0){
            b[i]=a%10;
            i++;
            a=a/10;
        }
        for(int j=0;j<i;j++){
            if(b[j]!=b[i-j-1]){
                System.out.println("Number is not palindrome number");
                c=1;
                break;
            }
        }
        if(c==0){
            System.out.println("Entered number is Palindrome number");
        }
    }
}
//Output//
/*C:\Users\shiva\Desktop\java>java plnum
Enter your number
171
Your enter number is :171
Entered number is Palindrome n
*/
