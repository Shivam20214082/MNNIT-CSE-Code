//Shivam Kumar Gupta
//20214082
//Group CSE-D
import java.util.Scanner;
class psum{
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
        System.out.println("Enter the number");
        Scanner s =new Scanner(System.in);
        int a=s.nextInt();
        int[] p,q,r;
        int c=a-1,d=2;
        p= new int[c];
        q =new int[c];
        r =new int[c];
        for(int i=0;i<c;i++){
            p[i]=d;
            q[i]=check(d);
            d++;
        }
        System.out.println("Prime number");
        int e=0,f=0;
        for(int i=0;i<c;i++){
            if(q[i]==1){
                r[e]=p[i];
                e++;
                System.out.print(p[i]+" ");
            }
        }
        System.out.println();
        for(int i=0;i<e;i++){
            for(int j=i;j<e;j++){
                if(r[i]+r[j]==a){
                    System.out.println(r[i]+" + "+r[j]+" = "+a);
                    f++;
                }
            }
        }
        if(f==0){
            System.out.println(a+" can not be expressed in two prime number");
        }
    }
}
//output//
/*C:\Users\shiva\Desktop\java>java psum
Enter the number
56
Prime number
2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53
3 + 53 = 56
13 + 43 = 56
19 + 37 = 5
*/

