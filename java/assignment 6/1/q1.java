//Shivam Kumar Gupta
//20214082
//CSE-d
import java.util.Scanner;

abstract class student{
    Scanner s=new Scanner(System.in);
    protected String name;
    protected int reg_no ;
    protected String father_name;
    protected String curr_address;
    protected String parm_address;
    protected String phone_number;
    protected String email_id;
    abstract void setdata1(String name,int reg_no,String father_name,String curr_address,String parm_address,String phone_number,String email_id,String degree,int Total_marks,int marks);
    abstract void getdata();
    
    
}
class UGStudent extends student{
    String pre_degree;
    int Total_marks;
    int marks;
    
    void setdata(String name,int reg_no,String father_name,String curr_address,String parm_address,String phone_number,String email_id){    
        this.name=name;
        this.reg_no=reg_no;
        this.father_name=father_name;
        this.curr_address=curr_address;
        this.phone_number=phone_number;
        this.parm_address=parm_address;
        this.email_id=email_id;
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
    void setdata1(String name,int reg_no,String father_name,String curr_address,String parm_address,String phone_number,String email_id,String degree,int Total_marks,int marks){
        setdata(name,reg_no,father_name,curr_address,parm_address,phone_number,email_id);
        this.pre_degree=degree;
        this.Total_marks=Total_marks;
        this.marks=marks;
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
    void setdata(String name,int reg_no,String father_name,String curr_address,String parm_address,String phone_number,String email_id){    
        this.name=name;
        this.reg_no=reg_no;
        this.father_name=father_name;
        this.curr_address=curr_address;
        this.phone_number=phone_number;
        this.parm_address=parm_address;
        this.email_id=email_id;
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
    void setdata1(String name,int reg_no,String father_name,String curr_address,String parm_address,String phone_number,String email_id,String degree,int Total_marks,int marks){
        setdata(name,reg_no,father_name,curr_address,parm_address,phone_number,email_id);
        this.pre_degree=degree;
        this.Total_marks=Total_marks;
        this.marks=marks;
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
    void setdata(String name,int reg_no,String father_name,String curr_address,String parm_address,String phone_number,String email_id){    
        this.name=name;
        this.reg_no=reg_no;
        this.father_name=father_name;
        this.curr_address=curr_address;
        this.phone_number=phone_number;
        this.parm_address=parm_address;
        this.email_id=email_id;
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
    void setdata1(String name,int reg_no,String father_name,String curr_address,String parm_address,String phone_number,String email_id,String degree,int Total_marks,int marks){
        setdata(name,reg_no,father_name,curr_address,parm_address,phone_number,email_id);   
        this.pre_degree=degree;
        this.Total_marks=Total_marks;
        this.marks=marks;
    }
    void getdata1(){
        getdata();
        System.out.println("Degree of student :: "+pre_degree);     
        System.out.println("total marks :: "+Total_marks);
        System.out.println("marks of student :: "+marks);
    }
}

class q1{
    public static void main(String arc[]){
        UGStudent u=new UGStudent();
        PGStudent p=new PGStudent();
        PhDStudent ph=new PhDStudent();
        u.setdata1("Shivam",20214082,"Rajesk Kumar Gupta","Allahabad","Jaunpur","8735093895","shivam66jnp@gmail.com","BTech",600,545);
        p.setdata1("Shivam",20214082,"Rajesk Kumar Gupta","Allahabad","Jaunpur","8735093895","shivam65jnp@gmail.com","NTech",600,345);
        ph.setdata1("Shivam",20214082,"Rajesk Kumar Gupta","Allahabad","Jaunpur","8735093895","shivam64jnp@gmail.com","Msc",600,432);
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
UG Student information::
Name of student :: Shivam
registration number of student :: 20214082
Fathers Name of student :: Rajesk Kumar Gupta
current address of student :: Allahabad
parmanent address of student :: Jaunpur
phone number of student :: 8735093895
email id of student :: shivam66jnp@gmail.com
Degree of student :: BTech
total marks :: 600
marks of student :: 545


PG Student information::
Name of student :: Shivam
registration number of student :: 20214082
Fathers Name of student :: Rajesk Kumar Gupta
current address of student :: Allahabad
parmanent address of student :: Jaunpur
phone number of student :: 8735093895
email id of student :: shivam65jnp@gmail.com
Degree of student :: NTech
total marks :: 600
marks of student :: 345


PhD Student information::
Name of student :: Shivam
registration number of student :: 20214082
Fathers Name of student :: Rajesk Kumar Gupta
current address of student :: Allahabad
parmanent address of student :: Jaunpur
phone number of student :: 8735093895
email id of student :: shivam64jnp@gmail.com
Degree of student :: Msc
total marks :: 600
marks of student :: 432
 */