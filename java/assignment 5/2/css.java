//Shivam Kumar Gupta
//20214082
//CSE-D
import java.util.*;

class Course{
    protected String name;
    protected int credit ;
    Scanner s=new Scanner(System.in);
    void setdata(){
        System.out.print("Enter the Name of Course :: ");     
        name=s.nextLine();
        System.out.print("Enter the credit of course :: ");
        credit=s.nextInt();
    }
    void getdata(){
        System.out.println("Name of Course :: "+name);     
        System.out.println("Credit of Course :: "+credit);
    } 
}

class UGCourse extends Course{
    protected int code;
    Scanner s=new Scanner(System.in);
    void setdata1(){
        setdata();
        System.out.print("Enter the code of the course :: ");
        code=s.nextInt();
    }
    void getdata1(){
        getdata();
        System.out.println("Code of Course :: UG-"+code);
    } 
}
class PGCourse extends Course{
    protected int code;
    Scanner s=new Scanner(System.in);
    void setdata1(){
        setdata();
        System.out.print("Enter the code of the course :: ");
        code=s.nextInt();
    }
    void getdata1(){
        getdata();
        System.out.println("Code of Course :: PG-"+code);
    } 
}

public class css {
    public static void main(String arg[]){
        UGCourse u=new UGCourse();
        PGCourse p=new PGCourse();
        System.out.println("\n\nEnter UG course information::");
        u.setdata1();
        System.out.println("\n\nEnter PG course information::");
        p.setdata1();
        System.out.println("\n\nUG course information::");
        u.getdata1();
        System.out.println("\n\nPG course information::");
        p.getdata1();
    }
}
//output
/*
Enter UG course information::
Enter the Name of Course :: JAVA
Enter the credit of course :: 4
Enter the code of the course :: 2000


Enter PG course information::
Enter the Name of Course :: Data structure
Enter the credit of course :: 5
Enter the code of the course :: 1000


UG course information::
Name of Course :: JAVA
Credit of Course :: 4
Code of Course :: UG-2000


PG course information::
Name of Course :: Data structure
Credit of Course :: 5
Code of Course :: PG-1000
 */
