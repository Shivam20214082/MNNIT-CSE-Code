import java.util.Scanner;

class Employee{
    int employeeID;
    String name;
    String departmet;
    String Dob;
    int yearOfJoining;
    int phone_number;
    Employee(int employeeID,String name,String departmet,String Dob,int yearOfJoining,int phone_number){
        this.employeeID=employeeID;
        this.name=name;
        this.departmet=departmet;
        this.Dob=Dob;
        this.yearOfJoining=yearOfJoining;
        this.phone_number=phone_number;
    }
    Employee(){ }
    void display(){
        System.out.println("Employee Id :: "+employeeID+"\tName:: "+name+"\tDepartment:: "+departmet+"DOB:: "+Dob+"\tYear of Joining:: "+yearOfJoining+"\tPhone Number:: "+phone_number);
    }
}
class Faculty extends Employee{
    int no_of_subject;
    int no_of_lab;
    String a[]=new String[10];
    Faculty(int no_of_subject,int no_of_lab){
        this.no_of_subject=no_of_subject;
        this.no_of_lab=no_of_lab;
        Scanner s=new Scanner(System.in);
        for(int i=0;i<no_of_lab+no_of_subject;i++){
            System.out.println("Enter "+(i+1)+" subject or lab name");
            a[i]=s.nextLine();
        }
    }
    void display(){
        System.out.println("Subject and List Taught :: ");
        for(int i=0;i<no_of_lab+no_of_subject;i++){
            System.out.println((i+1)+" subject or lab name "+a[i]);
        }
    }
}
class OfficeStaff extends Employee{
    int no_of_skill;
    String a[]=new String[5];
    OfficeStaff(int no_of_skill){
        this.no_of_skill=no_of_skill;
        
        Scanner s=new Scanner(System.in);
        for(int i=0;i<no_of_skill;i++){
            System.out.println("Enter "+(i+1)+" skill");
            a[i]=s.nextLine();
        }
    }
    
    
    void display(){
        System.out.println("Skill list :: ");
        for(int i=0;i<no_of_skill;i++){
            System.out.println((i+1)+" Skill :: "+a[i]);
        }
    }
    
}

public class q5 {
    public static void main(String arg[]){
        Scanner s=new Scanner(System.in);
        Employee[] e;
        e=new Employee[6];
        OfficeStaff[] o=new OfficeStaff[6];
        Faculty[] f=new Faculty[6];
        System.out.println("Enter info. of Employee 1");
        e[0]=new Employee(100,"Shivam","Design","12/2/2003",2020,987654321);
        o[0]=new OfficeStaff(2);
        f[0]=new Faculty(1, 1);
        System.out.println("Enter info. of Employee 2");
        e[1]=new Employee(200,"Ram","Accounting","12/12/2002",2019,157654321);
        o[1]=new OfficeStaff(2);
        f[1]=new Faculty(1, 1);
        System.out.println("Enter info. of Employee 3");
        e[2]=new Employee(300,"Shyam","Computation","24/4/2003",2021,547654321);
        o[2]=new OfficeStaff(2);
        f[2]=new Faculty(1, 1);
        System.out.println("Enter info. of Employee 4");
        e[3]=new Employee(400,"Sonali","Management","02/3/2003",2018,987623321);
        o[3]=new OfficeStaff(2);
        f[3]=new Faculty(1, 1);
        System.out.println("Enter info. of  Employee 5");
        e[4]=new Employee(500,"riya","Eletrician","11/8/2003",2020,983424321);
        o[4]=new OfficeStaff(2);
        f[4]=new Faculty(1, 1);

        for(int i=0;i<5;i++){
            e[i].display();
            o[i].display();
            f[i].display();
        }

        System.out.println("Enter Employee Id");
        int d=s.nextInt();
        for(int i=0;i<5;i++){
            if(e[i].employeeID==d){
                e[i].display();
                o[i].display();
                f[i].display(); 
            }
        }

    }
    
}

//output
/*
Enter info. of Employee 1
Enter 1 skill
technician
Enter 2 skill
dancer
Enter 1 subject or lab name
DSA
Enter 2 subject or lab name
java
Enter info. of Employee 2
Enter 1 skill
gamer
Enter 2 skill
singer
Enter 1 subject or lab name
art
Enter 2 subject or lab name
Biology
Enter info. of Employee 3
Enter 1 skill
Webdeveloper
Enter 2 skill
artist
Enter 1 subject or lab name
art
Enter 2 subject or lab name
webdevelopment
Enter info. of Employee 4
Enter 1 skill
writer
Enter 2 skill
singer
Enter 1 subject or lab name
art 
Enter 2 subject or lab name
math
Enter info. of  Employee 5
Enter 1 skill
coder
Enter 2 skill
electrician
Enter 1 subject or lab name
Digitalelctronics
Enter 2 subject or lab name
DSA
Employee Id :: 100      Name:: Shivam   Department:: DesignDOB:: 12/2/2003      Year of Joining:: 2020  Phone Number:: 987654321
Skill list ::
1 Skill :: technician
2 Skill :: dancer
Subject and List Taught ::
1 subject or lab name DSA
2 subject or lab name java
Employee Id :: 200      Name:: Ram      Department:: AccountingDOB:: 12/12/2002 Year of Joining:: 2019  Phone Number:: 157654321
Skill list ::
1 Skill :: gamer
2 Skill :: singer
Subject and List Taught ::
1 subject or lab name art
2 subject or lab name Biology
Employee Id :: 300      Name:: Shyam    Department:: ComputationDOB:: 24/4/2003 Year of Joining:: 2021  Phone Number:: 547654321
Skill list ::
1 Skill :: Webdeveloper
2 Skill :: artist
Subject and List Taught ::
1 subject or lab name art
2 subject or lab name webdevelopment
Employee Id :: 400      Name:: Sonali   Department:: ManagementDOB:: 02/3/2003  Year of Joining:: 2018  Phone Number:: 987623321
Skill list ::
1 Skill :: writer
2 Skill :: singer
Subject and List Taught ::
1 subject or lab name art
2 subject or lab name math
Employee Id :: 500      Name:: riya     Department:: EletricianDOB:: 11/8/2003  Year of Joining:: 2020  Phone Number:: 983424321
Skill list ::
1 Skill :: coder
2 Skill :: electrician
Subject and List Taught ::
1 subject or lab name Digitalelctronics
2 subject or lab name DSA
Enter Employee Id
200
Employee Id :: 200      Name:: Ram      Department:: AccountingDOB:: 12/12/2002 Year of Joining:: 2019  Phone Number:: 157654321
Skill list ::
1 Skill :: gamer
2 Skill :: singer
Subject and List Taught ::
1 subject or lab name art
2 subject or lab name Biology
 */