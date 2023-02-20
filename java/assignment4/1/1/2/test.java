//Shivam Kumar Gupta
//20214082
//CSE-D

import java.util.Scanner;
class Testdata{
    int total=0;
    int most,least;
    int getTotal(int a[]){
        most=a[0];
        least=a[0];
        for(int i=0;i<a.length;i++){
            if(a[i]>most){
                most=a[i];
            }
            if(a[i]<least){
                least=a[i];
            }
            total+=a[i];
        }
        return total;
    }
    float getAverage(){
        return total/12;
    }
    int getHighest(){
        return most;
    }
    int getLowest(){
        return least;
    }
}
public class test {
    public static void main(String ar[]){
        Testdata r=new Testdata();
        int a[]={87,76,68,89,98};
        System.out.println("Total :: "+r.getTotal(a));
        System.out.println("Average :: "+r.getAverage());
        System.out.println("HIGHEST Data :: "+r.getHighest());
        System.out.println("Lowest data :: "+r.getLowest());
    }
}
//output
/*
Total :: 418
Average :: 34.0
HIGHEST Data :: 98
Lowest data :: 68
 */