//Shivam Kumar Gupta
//20214082
//CSE-D
import java.util.Scanner;

public class line {
    public static void main(String ar[]){
        Scanner s=new Scanner(System.in);
        System.out.print("Enter Favorite color :: ");
        String c=s.nextLine();
        System.out.print("Enter Favorite Food :: ");
        String f=s.nextLine();
        System.out.print("Enter Favorite Animal :: ");
        String a=s.nextLine();
        System.out.print("Enter First name of  a Friend or Relative :: ");
        char n=s.next().charAt(0);
        System.out.printf("I had a dream that \033[3m%c\033[0m ate a \033[3m%s \033[0m \033[3m%s \033[0m and said it tasted like \033[3m%s \033[0m! \n ",n,c,a,f);

    }
}
//output
/*
 * Enter Favorite color :: Blue
 * Enter Favorite Food :: Pizza
 * Enter Favorite Animal :: Dog
 * Enter First name of a Friend or Relative :: A
 * I had a dream that A ate a Blue Dog and said it tasted like Pizza !
 */
