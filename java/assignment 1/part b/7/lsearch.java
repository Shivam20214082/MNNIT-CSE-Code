//Shivam Kumar Gupta
//20214082
//Group CSE-D
import java.util.Scanner;

class lsearch {
    public static void main(String[] argc){
        int[] a;
        a=new int[10];
        Scanner s=new Scanner(System.in);
        for(int i=0;i<10;i++){
            System.out.println("Enter the " +(i+1)+" number of array");
            a[i]=s.nextInt();
        }
        System.out.println("Your array is:");
        for(int i=0;i<10;i++){
            System.out.print(a[i]+",");
        }
        System.out.println();
        System.out.println("Enter the number that u want to search");
        int b=s.nextInt();
        int c=0;
        for(int i=0;i<10;i++){
            if(a[i]==b){
                System.out.println("Number is at "+i+" index of given array");
                c=1;
            }
        }
        if(c==0){
            System.out.println("Number doesn't found");
        }
    }
        
}
//output//
/*
C:\Users\shiva\Desktop\java>java lsearch
Enter the 1 number of array
12
Enter the 2 number of array
45
Enter the 3 number of array
78
Enter the 4 number of array
98
Enter the 5 number of array
65
Enter the 6 number of array
32
Enter the 7 number of array
8
Enter the 8 number of array
754
Enter the 9 number of array
12
Enter the 10 number of array
258
Your array is:
12,45,78,98,65,32,8,754,12,258,
Enter the number that u want to search
98
Number is at 3 index of given array
*/

