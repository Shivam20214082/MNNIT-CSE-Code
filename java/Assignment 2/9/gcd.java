import java.util.Scanner;
class gcd{
    public static void main(String[] args){
        Scanner s=new Scanner(System.in);
        System.out.print("Enter First no. : ");
        int a=s.nextInt();
        System.out.print("Enter Second no. : ");
        int b=s.nextInt();
        System.out.print("Enter Third no. : ");
        int c=s.nextInt();
        System.out.print("Enter Fourth no. : ");
        int d=s.nextInt();
        System.out.print("Enter Five no. : ");
        int e=s.nextInt();
        int max=a;
        int min=a;
        //Finding maxmimum value
        if(max<b)
        max=b;
        if(max<c)
        max=c;
        if(max<d)
        max=d;
        if(max<e)
        max=e;

        // Finding minimum value
        if(min>b)
        min=b;
        if(min>c)
        min=c;
        if(min>d)
        min=d;
        if(min>e)
        min=e;

        //Finding gcd
        int gc=0;
        for(int i=1;i<=min;i++){
            if(a%i==0 && b%i==0 && c%i==0 && d%i==0 && e%i==0){
                gc=i;
            }
        }
        System.out.println("GCD is : "+gc);
        //Finding LCM
        int lc=0;
        int k=a*b*c*d*e;
        for(int i=max;i<=k;i++){
            if(i%a==0 && i%b==0 && i%c==0 && i%d==0 && i%e==0){
                lc=i;
                break;
            }
        }
        System.out.println("GCD is : "+lc);
    }
}

//output
/*
Enter First no. : 12
Enter Second no. : 15
Enter Third no. : 75
Enter Fourth no. : 89
Enter Five no. : 23
GCD is : 1
GCD is : 614100
 */