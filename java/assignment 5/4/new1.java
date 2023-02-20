
import java.util.Scanner;

class payment{
    int payment_id;
    String bank_branch;
    String to_pay;
    int account_number;
    Double amount;
    void dd(String b,String t,Double a,int p,int an){
        bank_branch=b;
        to_pay=t;
        amount=a;
        payment_id=p;
        account_number=an;
    }
    void display(){
        System.out.println("Branch Name :: "+bank_branch);
        System.out.println("Payment Id :: "+payment_id);
        System.out.println("To pay :: "+to_pay);
        System.out.println("Account number :: "+account_number);
        System.out.println("Amount :: "+amount+"\n\n");
    }
}

class Course{
    protected String name;
    protected int credit ;
    Scanner s=new Scanner(System.in);
    void setdata(String n,int c){    
        name=n;
        credit=c;
    }
    void getdata(){
        System.out.println("Name of Course :: "+name);     
        System.out.println("Credit of Course :: "+credit);
    } 
}

class student{
    protected String name;
    protected int reg_no ;
    protected String father_name;
    protected String curr_address;
    protected String parm_address;
    protected int phone_number;
    protected String email_id;
    Scanner s=new Scanner(System.in);
    Course cs=new Course();
    payment pay=new payment();
    void setdata(String n,int r,String f,String c,String p,int pn,String e,String cn,int cc,String b,String t,Double a,int paym,int an)    {
        name=n;
        reg_no =r;
        father_name=f;
        curr_address=c;
        parm_address=p;
        phone_number=pn;
        email_id=e;
        cs.setdata(cn,cc);
        pay.dd(b,t,a,paym,an);
    }
    void getdata(){
        System.out.println("Name of student :: "+name);     
        System.out.println("registration number of student :: "+reg_no);
        System.out.println("Fathers Name of student :: "+father_name);
        System.out.println("current address of student :: "+curr_address);
        System.out.println("parmanent address of student :: "+parm_address);
        System.out.println("phone number of student :: "+phone_number);
        System.out.println("email id of student :: "+email_id);
        cs.getdata();
        pay.display();
    } 
}

class new1 {
    public static void main(String arg[]){
        student s1 =new student();
        student s2 =new student();
        student s3 =new student();
        student s4 =new student();
        student s5 =new student();
        student s6 =new student();
        student s7 =new student();
        student s8 =new student();
        student s9 =new student();
        student s0 =new student();
        s1.setdata("shivam", 20214082, "Rajesh", "jaunpur", "jaunpur", 345678900, "shivam@gmail.com", "CSE", 4, "SBI", "SBI", 400.0, 1324354, 987654356);
        s2.setdata("shyam", 20215082, "shivam", "jaunpur", "jaunpur", 345678900, "shivam@gmail.com", "CSE", 4, "SBI", "SBI", 400.0, 2345465, 987654356);
        s3.setdata("ram", 20216082, "shivam", "jaunpur", "jaunpur", 345678900, "shivam@gmail.com", "CSE", 4, "SBI", "SBI", 400.0, 2526662, 987654356);
        s4.setdata("sita", 20217082, "Ram", "jaunpur", "jaunpur", 345678900, "shivam@gmail.com", "CSE", 4, "SBI", "SBI", 400.0, 1153657, 987654356);
        s5.setdata("gita", 20218082, "shyam", "jaunpur", "jaunpur", 345678900, "shivam@gmail.com", "CSE", 4, "SBI", "SBI", 400.0, 97864315, 987654356);
        s6.setdata("shashi", 20219082, "shyam", "jaunpur", "jaunpur", 345678900, "shivam@gmail.com", "CSE", 4, "SBI", "SBI", 400.0, 98874344, 987654356);
        s7.setdata("rahul", 20212082, "amit", "jaunpur", "jaunpur", 345678900, "shivam@gmail.com", "CSE", 4, "SBI", "SBI", 400.0, 547755213, 987654356);
        s8.setdata("amit", 20215682, "Rahul", "jaunpur", "jaunpur", 345678900, "shivam@gmail.com", "CSE", 4, "SBI", "SBI", 400.0, 98867543, 987654356);
        s9.setdata("riya", 20213082, "shashi", "jaunpur", "jaunpur", 345678900, "shivam@gmail.com", "CSE", 4, "SBI", "SBI", 400.0, 64322567, 987654356);
        s0.setdata("sonali", 20211082, "shivam", "jaunpur", "jaunpur", 345678900, "shivam@gmail.com", "CSE", 4, "SBI", "SBI", 400.0, 32546689, 987654356);
        System.out.println("\n\nStudent1 info::");
        s1.getdata();
        System.out.println("\n\nStudent2 info::");
        s2.getdata();
        System.out.println("\n\nStudent3 info::");
        s3.getdata();
        System.out.println("\n\nStudent4 info::");
        s4.getdata();
        System.out.println("\n\nStudent5 info::");
        s5.getdata();
        System.out.println("\n\nStudent6 info::");
        s6.getdata();
        System.out.println("\n\nStudent7 info::");
        s7.getdata();
        System.out.println("\n\nStudent8 info::");
        s8.getdata();
        System.out.println("\n\nStudent9 info::");
        s9.getdata();
        System.out.println("\n\nStudent0 info::");
        s0.getdata();
    }
    
}
//output
/*
Student1 info::
Name of student :: shivam
registration number of student :: 20214082
Fathers Name of student :: Rajesh
current address of student :: jaunpur
parmanent address of student :: jaunpur
phone number of student :: 345678900
email id of student :: shivam@gmail.com
Name of Course :: CSE
Credit of Course :: 4
Branch Name :: SBI
Payment Id :: 1324354
To pay :: SBI
Account number :: 987654356
Amount :: 400.0




Student2 info::
Name of student :: shyam
registration number of student :: 20215082
Fathers Name of student :: shivam
current address of student :: jaunpur
parmanent address of student :: jaunpur
phone number of student :: 345678900
email id of student :: shivam@gmail.com
Name of Course :: CSE
Credit of Course :: 4
Branch Name :: SBI
Payment Id :: 2345465
To pay :: SBI
Account number :: 987654356
Amount :: 400.0




Student3 info::
Name of student :: ram
registration number of student :: 20216082
Fathers Name of student :: shivam
current address of student :: jaunpur
parmanent address of student :: jaunpur
phone number of student :: 345678900
email id of student :: shivam@gmail.com
Name of Course :: CSE
Credit of Course :: 4
Branch Name :: SBI
Payment Id :: 2526662
To pay :: SBI
Account number :: 987654356
Amount :: 400.0




Student4 info::
Name of student :: sita
registration number of student :: 20217082
Fathers Name of student :: Ram
current address of student :: jaunpur
parmanent address of student :: jaunpur
phone number of student :: 345678900
email id of student :: shivam@gmail.com
Name of Course :: CSE
Credit of Course :: 4
Branch Name :: SBI
Payment Id :: 1153657
To pay :: SBI
Account number :: 987654356
Amount :: 400.0




Student5 info::
Name of student :: gita
registration number of student :: 20218082
Fathers Name of student :: shyam
current address of student :: jaunpur
parmanent address of student :: jaunpur
phone number of student :: 345678900
email id of student :: shivam@gmail.com
Name of Course :: CSE
Credit of Course :: 4
Branch Name :: SBI
Payment Id :: 97864315
To pay :: SBI
Account number :: 987654356
Amount :: 400.0




Student6 info::
Name of student :: shashi
registration number of student :: 20219082
Fathers Name of student :: shyam
current address of student :: jaunpur
parmanent address of student :: jaunpur
phone number of student :: 345678900
email id of student :: shivam@gmail.com
Name of Course :: CSE
Credit of Course :: 4
Branch Name :: SBI
Payment Id :: 98874344
To pay :: SBI
Account number :: 987654356
Amount :: 400.0




Student7 info::
Name of student :: rahul
registration number of student :: 20212082
Fathers Name of student :: amit
current address of student :: jaunpur
parmanent address of student :: jaunpur
phone number of student :: 345678900
email id of student :: shivam@gmail.com
Name of Course :: CSE
Credit of Course :: 4
Branch Name :: SBI
Payment Id :: 547755213
To pay :: SBI
Account number :: 987654356
Amount :: 400.0




Student8 info::
Name of student :: amit
registration number of student :: 20215682
Fathers Name of student :: Rahul
current address of student :: jaunpur
parmanent address of student :: jaunpur
phone number of student :: 345678900
email id of student :: shivam@gmail.com
Name of Course :: CSE
Credit of Course :: 4
Branch Name :: SBI
Payment Id :: 98867543
To pay :: SBI
Account number :: 987654356
Amount :: 400.0




Student9 info::
Name of student :: riya
registration number of student :: 20213082
Fathers Name of student :: shashi
current address of student :: jaunpur
parmanent address of student :: jaunpur
phone number of student :: 345678900
email id of student :: shivam@gmail.com
Name of Course :: CSE
Credit of Course :: 4
Branch Name :: SBI
Payment Id :: 64322567
To pay :: SBI
Account number :: 987654356
Amount :: 400.0




Student0 info::
Name of student :: sonali
registration number of student :: 20211082
Fathers Name of student :: shivam
current address of student :: jaunpur
parmanent address of student :: jaunpur
phone number of student :: 345678900
email id of student :: shivam@gmail.com
Name of Course :: CSE
Credit of Course :: 4
Branch Name :: SBI
Payment Id :: 32546689
To pay :: SBI
Account number :: 987654356
Amount :: 400.0
 */
