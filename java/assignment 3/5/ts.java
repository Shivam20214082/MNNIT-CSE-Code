import java.util.Scanner;
class testscore{
    int a,b,c;
    void setdata(){
        Scanner s=new Scanner(System.in);
        System.out.println("Enter three testscore");
        a=s.nextInt();
        b=s.nextInt();
        c=s.nextInt();
    }
    void getdata(){
        System.out.println("Score 1: "+a+"\t\tScore 2: "+b+"\t\tScore 3: "+c);
    }
    float avg(){
        return(a+b+c)/3;
    }
}
class ts{
    public static void main(String a[]){
        testscore s=new testscore();
        s.setdata();
        float b=s.avg();
        System.out.println("Average is: "+b);
    }

}

//output
/*
Enter three testscore
79
34
31
Average is: 48.0
 */