//Shivam Kumar Gupta
//20214082
//CSE-d
import java.util.Scanner;

class student{
    protected String name;
    protected int reg_no ;
    protected String father_name;
    protected String curr_address;
    protected String parm_address;
    protected long phone_number;
    protected String email_id;
    Scanner s=new Scanner(System.in);
    void setdata(){
        System.out.print("Enter the Name of student :: ");     
        name=s.nextLine();
        System.out.print("Enter the registration number of student :: ");
        reg_no=s.nextInt();
        System.out.print("Enter the Fathers Name of student :: ");
        father_name=s.nextLine();
        father_name=s.nextLine();
        System.out.print("Enter the current address of student :: ");
        curr_address=s.nextLine();
        System.out.print("Enter the phone number of student :: ");
        phone_number=s.nextLong();
        System.out.print("Enter the parmanent address of student :: ");
        parm_address=s.nextLine();
        parm_address=s.nextLine();
        System.out.print("Enter the email id of student :: ");
        email_id=s.next();
    }
    void getdata(){
        System.out.println("Name of student :: "+name);     
        System.out.println("registration number of student :: "+reg_no);
        System.out.println("Fathers Name of student :: "+father_name);
        System.out.println("current address of student :: "+curr_address);
        System.out.println("parmanent address of student :: "+parm_address);
        System.out.println("phone number of student :: "+phone_number);
        System.out.println("email id of student :: "+email_id);
    } 
}
class UGStudent extends student{
    String pre_degree;
    int Total_marks;
    int marks;
    void setdata1(){
        setdata();
        System.out.print("Enter the Degree of student :: ");     
        pre_degree=s.nextLine();
        pre_degree=s.nextLine();
        System.out.print("Enter the total marks :: ");
        Total_marks=s.nextInt();
        System.out.print("Enter the marks of student :: ");
        marks=s.nextInt();
    }
    void getdata1(){
        getdata();
        System.out.println("Degree of student :: "+pre_degree);     
        System.out.println("total marks :: "+Total_marks);
        System.out.println("marks of student :: "+marks);
    }

}
class PGStudent extends student{
    String pre_degree;
    int Total_marks;
    int marks;
    void setdata1(){
        setdata();
        System.out.print("Enter the Degree of student :: ");     
        pre_degree=s.nextLine();
        pre_degree=s.nextLine();
        System.out.print("Enter the total marks :: ");
        Total_marks=s.nextInt();
        System.out.print("Enter the marks of student :: ");
        marks=s.nextInt();
    }
    void getdata1(){
        getdata();
        System.out.println("Degree of student :: "+pre_degree);     
        System.out.println("total marks :: "+Total_marks);
        System.out.println("marks of student :: "+marks);
    }
}
class PhDStudent extends student{
    String pre_degree;
    int Total_marks;
    int marks;
    void setdata1(){
        setdata();
        System.out.print("Enter the Degree of student :: ");     
        pre_degree=s.nextLine();
        pre_degree=s.nextLine();
        System.out.print("Enter the total marks :: ");
        Total_marks=s.nextInt();
        System.out.print("Enter the marks of student :: ");
        marks=s.nextInt();
    }
    void getdata1(){
        getdata();
        System.out.println("Degree of student :: "+pre_degree);     
        System.out.println("total marks :: "+Total_marks);
        System.out.println("marks of student :: "+marks);
    }
}

class Main{
    public static void main(String arc[]){
        UGStudent u=new UGStudent();
        PGStudent p=new PGStudent();
        PhDStudent ph=new PhDStudent();
        System.out.println("\n\nEnter UG Student information::");
        u.setdata1();
        System.out.println("\n\nEnter PG Student information::");
        p.setdata1();
        System.out.println("\n\nEnter PhD Student information::");
        ph.setdata1();
        System.out.println("\n\nUG Student information::");
        u.getdata1();
        System.out.println("\n\nPG Student information::");
        p.getdata1();
        System.out.println("\n\nPhD Student information::");
        ph.getdata1();
    }
}
//output
/*
Enter UG Student information::
Enter the Name of student :: shivam kumar gupta
Enter the registration number of student :: 20214082
Enter the Fathers Name of student :: Rajesh Kumar Gupta
Enter the current address of student :: Jaunpur
Enter the phone number of student :: 8736093895
Enter the parmanent address of student :: Jaunpur
Enter the email id of student :: shivam66jnp@gmail.com
Enter the Degree of student :: Interschool
Enter the total marks :: 600
Enter the marks of student :: 575


Enter PG Student information::
Enter the Name of student :: Shyam
Enter the registration number of student :: 20203444
Enter the Fathers Name of student :: Skd
Enter the current address of student :: Jaunpur
Enter the phone number of student :: 4567890
Enter the parmanent address of student :: dfghj
Enter the email id of student :: tfghbn@gamil.com
Enter the Degree of student :: Btech
Enter the total marks :: 500
Enter the marks of student :: 454


Enter PhD Student information::
Enter the Name of student :: dfghj
Enter the registration number of student :: 5467890
Enter the Fathers Name of student :: ihjgf
Enter the current address of student :: cvghjui
Enter the phone number of student :: 345678
Enter the parmanent address of student :: erwfgh
Enter the email id of student :: fghh@gmail.com
Enter the Degree of student :: Bsc math
Enter the total marks :: 400
Enter the marks of student :: 300


UG Student information::
Name of student :: shivam kumar gupta
registration number of student :: 20214082
Fathers Name of student :: Rajesh Kumar Gupta
current address of student :: Jaunpur
parmanent address of student :: Jaunpur
phone number of student :: 8736093895
email id of student :: shivam66jnp@gmail.com
Degree of student :: Interschool
total marks :: 600
marks of student :: 575


PG Student information::
Name of student :: Shyam
registration number of student :: 20203444
Fathers Name of student :: Skd
current address of student :: Jaunpur
parmanent address of student :: dfghj
phone number of student :: 4567890
email id of student :: tfghbn@gamil.com
Degree of student :: Btech
total marks :: 500
marks of student :: 454


PhD Student information::
Name of student :: dfghj
registration number of student :: 5467890
Fathers Name of student :: ihjgf
current address of student :: cvghjui
parmanent address of student :: erwfgh
phone number of student :: 345678
email id of student :: fghh@gmail.com
Degree of student :: Bsc math
total marks :: 400
marks of student :: 300
 */