import java.util.Scanner;
public class space{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        String tokens[] = str.split(" ");
        int size = tokens.length;
        for(int i=1; i<size; i++){
            if(i==1){

                System.out.print(tokens[i].substring(0,1).toUpperCase(
                )+tokens[i].substring(1)+" ");
            }
            else
                System.out.print(tokens[i]+" ");
        }
        System.out.println(tokens[0]);
    }
}
//output
/*
shivam is a good boy
Is a good boy shivam
 */

