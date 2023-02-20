//Shivam Kumar Gupta
//20214082
//Group CSE-D
import java.util.Scanner;
class prime{
    public static int check(int a){
        int c=1;
        for(int i=2;i<a;i++){
            if(a%i==0){
                c=0;
                break;
            }
        }
        if(c==1)
        return 1;
        else 
        return 0;
    }
    public static void main(String[] args){
        System.out.println("Enter the lower bound and upper bound");
        Scanner s =new Scanner(System.in);
        int a=s.nextInt();
        int b=s.nextInt();
        int c=b-a+1,d=a;
        int[] p,q;
        p= new int[c];
        q =new int[c];
        for(int i=0;i<c;i++){
            p[i]=d;
            q[i]=check(d);
            d++;
        }
        for(int i=0;i<c;i++){
            System.out.print(p[i]+" ");
        }
        System.out.println();
        for(int i=0;i<c;i++){
            System.out.print(q[i]+"  ");
        }
        System.out.println();

        System.out.println("Prime number");
        for(int i=0;i<c;i++){
            if(q[i]==1){
                System.out.print(p[i]+" ");
            }
        }
        System.out.println();
    }
}
//output//
/*C:\Users\shiva\Desktop\java>java prime
Enter the lower bound and upper bound
13
56
13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56
1  0  0  0  1  0  1  0  0  0  1  0  0  0  0  0  1  0  1  0  0  0  0  0  1  0  0  0  1  0  1  0  0  0  1  0  0  0  0  0  1  0  0  0
Prime number
13 17 19 23 29 31 37 41 43 47 53
*/

