import java.util.Scanner;
class prime{
    public static void main(String[] args){
        Scanner s=new Scanner(System.in);
        int[] b=new int[5];
        for(int i=0;i<5;i++){
            System.out.println("Enter "+(i+1)+" element");
            b[i]=s.nextInt();
        }
        System.out.println("Prime no. are :");
        for(int i=0;i<5;i++){
            int c=0;
            for(int j=2;j<b[i]/2;j++){
                if(b[i]%j==0){
                    c++;      
                }
            }
            if(c==0){
                System.out.print(b[i]+" ");
            }
        }
    }
}

//Output
/*
 Enter 1 element
12
Enter 2 element
35
Enter 3 element
39
Enter 4 element
13
Enter 5 element
17
Prime no. are :
13 17
 */