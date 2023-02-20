//Shivam Kumar Gupta
//20214082
//Group CSE-D
import java.util.Scanner;
class qsort{
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
        int b=0,c=a[0],d=9;
        for(int i=0;i<10;i++){
            if(a[i]<c){
                b++;
            }
        }
        a[0]=a[b];
        a[b]=c;
        for(int i=0;i<b;i++){
            if(a[i]>c && a[d]<c){
                int x=a[d];
                a[d]=a[i];
                a[i]=x;
                d--;
            }
            else if(a[i]>c && a[d]>c){
                d--;
                i--;
            }
            else if(a[i]<c && a[d]>c){
                d--;
            }
        }
        System.out.println("Your array after partition is:");
        for(int i=0;i<10;i++){
            System.out.print(a[i]+",");
        }
        System.out.println();

        for(int i=0;i<b;i++){
            for(int j=0;j<b-i;j++){
                if(a[j]>a[j+1]){
                    int e=a[j];
                    a[j]=a[j+1];
                    a[j+1]=e;
                }
            }
        }
        for(int i=b+1;i<10;i++){
            for(int j=0;j<10-i;j++){
                if(a[j]>a[j+1]){
                    int e=a[j];
                    a[j]=a[j+1];
                    a[j+1]=e;
                }
            }
        }
        System.out.println("Your array after sorting is:");
        for(int i=0;i<10;i++){
            System.out.print(a[i]+",");
        }
        System.out.println();
    }
        
}
//output//
/*
C:\Users\shiva\Desktop\java>java qsort
Enter the 1 number of array
8
Enter the 2 number of array
6
Enter the 3 number of array
4
Enter the 4 number of array
9
Enter the 5 number of array
1
Enter the 6 number of array
7
Enter the 7 number of array
36
Enter the 8 number of array
95
Enter the 9 number of array
45
Enter the 10 number of array
25
Your array is:
8,6,4,9,1,7,36,95,45,25,
Your array after partition is:
1,6,4,7,8,9,36,95,45,25,
Your array after sorting is:
1,4,6,7,8,9,36,95,45,25,
*/

