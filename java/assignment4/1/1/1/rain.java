//Shivam Kumar Gupta
//20214082
//CSE-D
import java.util.Scanner;
class Rainfall{
    double [] a=new double[12];
    int most=0,least=0;
    double total=0;
    Scanner s=new Scanner(System.in);
    void getrain(){
        System.out.println("Enter Rainfall in each month\n");
        for(int i=0;i<12;i++){
            System.out.printf("Enter Rainfall in %d month\n",i+1);
            a[i]=s.nextDouble();
            total+=a[i];
            if(a[i]>a[most]){
                most=i;
            }
            if(a[i]<a[least]){
                least=i;
            }
        }
    }
    double train(){
        return total;
    }
    double arain(){
        return total/12;
    }
    int mrain(){
        return (most+1);
    }
    int lrain(){
        return (least+1);
    }
}
public class rain {
    public static void main(String a[]){
        System.out.println("Do not Enter Negative number");
        Rainfall r=new Rainfall();
        r.getrain();
        System.out.println("Total Rainfall :: "+r.train());
        System.out.println("Average Rainfall :: "+r.arain());
        System.out.println("Month with most Rainfall :: "+r.mrain());
        System.out.println("Month with least rainfall :: "+r.lrain());
    }
}
//output
/*
Do not Enter Negative number
Enter Rainfall in each month

Enter Rainfall in 1 month
12
Enter Rainfall in 2 month
23
Enter Rainfall in 3 month
34
Enter Rainfall in 4 month
2
Enter Rainfall in 5 month
56
Enter Rainfall in 6 month
78
Enter Rainfall in 7 month
898
Enter Rainfall in 8 month
134
Enter Rainfall in 9 month
45
Enter Rainfall in 10 month
67
Enter Rainfall in 11 month
89
Enter Rainfall in 12 month
87
Total Rainfall :: 1525.0
Average Rainfall :: 127.08333333333333
Month with most Rainfall :: 7
Month with least rainfall :: 4
 */