//Shivam Kumar Gupta
//20214082
//Group CSE-D
import java.util.Scanner;

class pattern {
    public static void main(String[] argc){
        System.out.println("pyramid pattern ");
        for(int i=0;i<5;i++){
            for(int j=0;j<5-i;j++){
                System.out.print(" ");
            }
            for(int j=0;j<2*i+1;j++){
                System.out.print("*");
            }
            System.out.println();
        }
    }    
}

//output//
/*
C:\Users\shiva\Desktop\java>java pattern
pyramid pattern
     *
    ***
   *****
  *******
 *********
*/
