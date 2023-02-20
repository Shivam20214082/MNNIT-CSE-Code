import java.util.Scanner;
class pyroll{
    String name;
    int id_number;
    int rph;//rate per hour
    int twh;//total working hour
    void mutator(){
        Scanner s=new Scanner(System.in);
        System.out.println("Enter Rate per hour and Total working hour ");
        rph=s.nextInt();
        twh=s.nextInt();
    }
    void accessor(){
        System.out.println("Name: "+name+"\t\tId number: "+id_number+"\t\tRate per hour: "+rph+"\t\tTotal working hour: "+twh);
    }
    int gp(){
        return rph*twh;
    }
    pyroll(String a,int id){
        name=a;
        id_number=id;
    }
}
public class py{
    public static void main(String ar[]){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter your name and Id number");
        String a=sc.nextLine();
        int b=sc.nextInt();
        pyroll s=new pyroll(a,b);
        s.mutator();
        s.accessor();
        int c=s.gp();
        System.out.println("Total gross pay earned is: "+c);
        
    }
}

//output
/*
Enter your name and Id number
Shiavm kumar gupta
23687
Enter Rate per hour and Total working hour 
200
546
Name: Shiavm kumar gupta                Id number: 23687                Rate per hour: 200              Total working hour: 546
Total gross pay earned is: 109200
 */