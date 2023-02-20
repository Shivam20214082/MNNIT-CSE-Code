import java.util.Scanner;
class amm{
    public static void main(String[] args){
        System.out.println("Enter the value of N");
        Scanner s=new Scanner(System.in);
        int a=s.nextInt();
        int[] b=new int[a];
        int c=0;
        for(int i=0;i<a;i++){
            System.out.println("Enter "+(i+1)+" element");
            b[i]=s.nextInt();
            c+=b[i];
        }
        int min=b[0],max=b[0];
        for(int i=0;i<a;i++){
            if(b[i]>max){
                max=b[i];
            }
            if(b[i]<min){
                min=b[i];
            }
        }
        System.out.println("Total sum is "+c);
        System.out.println("Average is "+(float)c/a);
        System.out.println("Maximum value is "+max);
        System.out.println("Minimum value is "+min);
       
    }
}
//output//
/*
 * Enter the value of N
6
Enter 1 element
12
Enter 2 element
25
Enter 3 element
34
Enter 4 element
36
Enter 5 element
5
Enter 6 element
19
Total sum is 131
Average is 21.833334
Maximum value is 36
Minimum value is 5
 */