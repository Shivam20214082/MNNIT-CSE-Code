//Shivam Kumar Gupta
//20214082
//Group CSE-D
import java.util.Scanner;

class bsearch {
    public static void main(String[] argc){
        int[] a;
        a=new int[10];
        Scanner s=new Scanner(System.in);
        for(int i=0;i<10;i++){
            System.out.println("Enter the " +(i+1)+" number of array in sorted form");
            a[i]=s.nextInt();
        }
        System.out.println("Your array is:");
        for(int i=0;i<10;i++){
            System.out.print(a[i]+",");
        }
        System.out.println();
        System.out.println("Enter the number that u want to search");
        int b=s.nextInt();
        int beg=0,end=9;
        for(int i=0;i<10;i++){
            int mid=(beg+end)/2;
            if(a[mid]==b){
                System.out.println("Number is at "+mid+" index of given array");
                break;
            }
            else if(a[mid]>=b){
                end=mid-1;
            }
            else 
            beg=mid+1;
        }
    }
        
}
//outpt//
/*C:\Users\shiva\Desktop\java>java bsearch
Enter the 1 number of array in sorted form
12
Enter the 2 number of array in sorted form
16
Enter the 3 number of array in sorted form
18
Enter the 4 number of array in sorted form
19
Enter the 5 number of array in sorted form
21
Enter the 6 number of array in sorted form
26
Enter the 7 number of array in sorted form
27
Enter the 8 number of array in sorted form
29
Enter the 9 number of array in sorted form
35
Enter the 10 number of array in sorted form
39
Your array is:
12,16,18,19,21,26,27,29,35,39,
Enter the number that u want to search
29
Number is at 7 index of given array
*/

