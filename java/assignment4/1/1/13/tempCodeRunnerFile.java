
//Shivam Kumar Gupta
//20214082
//CSE-D
import java.util.*;
import java.lang.*;
class sort{
static void sort(String s[],int x){
    for(int i=0;i<x;i++){
        for(int j=0;j<x-1-i;j++){
            if(s[j].compareTo(s[j+1])>0){
                String d=s[j];
                s[j]=s[j+1];
                s[j+1]=d;
            }
        }
    }
    
    System.out.println("Final Array");
    // System.out.println(Arrays.toString(s));
    for(int i=0;i<x;i++){
        System.out.printf("%s ",s[i]);
    }
    System.out.printf("\n ");
}
}
public class alpha {
    public static void main(String arg[]){
        String p="a v d g h d j j h h d k l m n v";
        p=p.toLowerCase();
        System.out.println("Initial Array");
        System.out.println(p);
        System.out.println("\n");
        String s[]=p.split(" ");
        for(int i=0;i<s.length;i++){
            int count =1;
            for(int j=i+1;j<s.length;j++){
                if(s[i].compareTo(s[j])==0){
                    count++;
                    s[j]="0";
                }
            }
        }
        String x[]=new String[s.length];
        int k=0;
        for(int i=0;i<s.length;i++){
            if(s[i]!="0"){
                x[k++]=s[i];
            }
        }
        x[k]="\0";
        sort.sort(x,k);
    }   
}
//output
/*
Initial Array
a v d g h d j j h h d k l m n v


Final Array
a d g h j k l m n v  
*/