
import java.util.*;
public class stri {
    public static void main(String arg[]){
        String s[]={
            "you","are","required","to","create","array","of","string","element","further"
        };
        System.out.println("Initial Array");
        System.out.println(Arrays.toString(s));
        for(int i=0;i<10;i++){
            for(int j=0;j<9-i;j++){
                if(s[j].compareTo(s[j+1])>0){
                    String d=s[j];
                    s[j]=s[j+1];
                    s[j+1]=d;
                }
            }
        }
        System.out.println("Final Array");
        System.out.println(Arrays.toString(s));
    }
    
}
//output
/*
Initial Array
[you, are, required, to, create, array, of, string, element, further]
Final Array
[are, array, create, element, further, of, required, string, to, you]
 */