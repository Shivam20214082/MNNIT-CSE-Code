//Shivam Kumar Gupta
//20214082
//CSE-d
import java.util.Scanner;

abstract class Employee{
    int employeeID;
    String name;
    String departmet;
    String Dob;
    int yearOfJoining;
    int phone_number;
    void setdata(int employeeID,String name,String departmet,String Dob,int yearOfJoining,int phone_number){
        this.employeeID=employeeID;
        this.name=name;
        this.departmet=departmet;
        this.Dob=Dob;
        this.yearOfJoining=yearOfJoining;
        this.phone_number=phone_number;
    }
    void displaymain(){
        System.out.println("Employee Id :: "+employeeID+"\tName:: "+name+"\tDepartment:: "+departmet+"DOB:: "+Dob+"\tYear of Joining:: "+yearOfJoining+"\tPhone Number:: "+phone_number);
    }
}
class Faculty extends Employee{
    int no_of_subject;
    int no_of_lab;
    String a[]=new String[10];
    Faculty(int no_of_subject,int no_of_lab){
        System.out.println("Enter faculty information");
        this.no_of_subject=no_of_subject;
        this.no_of_lab=no_of_lab;
        Scanner s=new Scanner(System.in);
        for(int i=0;i<no_of_subject;i++){
            System.out.print("Enter subject "+(i+1)+" name :: ");
            a[i]=s.nextLine();
        }
        for(int i=no_of_lab;i<no_of_lab+no_of_subject;i++){
            System.out.print("Enter Lab "+(i+1-no_of_subject)+" name:: ");
            a[i]=s.nextLine();
        }
    }
    void display(){
        displaymain();
        System.out.println("Subject and List Taught :: ");
        for(int i=0;i<no_of_subject;i++){
            System.out.println("Subject "+(i+1)+" name  is "+a[i]);
        }
        for(int i=no_of_lab;i<no_of_lab+no_of_subject;i++){
            System.out.println("Lab "+(i+1-no_of_subject)+" name  is "+a[i]);
        }
    }
}
class OfficeStaff extends Employee{
    int no_of_skill;
    String a[]=new String[5];
    OfficeStaff(int no_of_skill){
        this.no_of_skill=no_of_skill;
        System.out.println("Enter skill information");   
        Scanner s=new Scanner(System.in);
        for(int i=0;i<no_of_skill;i++){
            System.out.print("Enter "+(i+1)+" skill :: ");
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

public class q3 {
    public static void main(String arg[]){
        Scanner s=new Scanner(System.in);
        OfficeStaff[] o=new OfficeStaff[6];
        Faculty[] f=new Faculty[6];
        System.out.println("Enter info. of Employee 1");
        f[0]=new Faculty(1, 1);
        f[0].setdata(100,"Shivam","Design","12/2/2003",2020,987654321);
        o[0]=new OfficeStaff(1);
        System.out.println("\n\nEnter info. of Employee 2");
        f[1]=new Faculty(1, 1);
        f[1].setdata(200,"Ram","Accounting","12/12/2002",2019,157654321);
        o[1]=new OfficeStaff(2);
        System.out.println("\n\nEnter info. of Employee 3");
        f[2]=new Faculty(1, 1);
        f[2].setdata(300,"Shyam","Computation","24/4/2003",2021,547654321);
        o[2]=new OfficeStaff(1);
        System.out.println("\n\nEnter info. of Employee 4");
        f[3]=new Faculty(1, 1);
        f[3].setdata(400,"Sonali","Management","02/3/2003",2018,987623321);
        o[3]=new OfficeStaff(1);
        System.out.println("\n\nEnter info. of  Employee 5");
        f[4]=new Faculty(1, 1);
        f[4].setdata(500,"riya","Eletrician","11/8/2003",2020,983424321);
        o[4]=new OfficeStaff(1);

        for(int i=0;i<5;i++){
            f[i].displaymain();
            o[i].display();
            f[i].display();
        }

        System.out.println("Enter Employee Id");
        int d=s.nextInt();
        for(int i=0;i<5;i++){
            if(f[i].employeeID==d){
                f[i].display();
                o[i].display();
                f[i].display(); 
            }
        }

    }
    
}

//output
/*
Enter info. of Employee 1
Enter faculty information
Enter subject 1 name :: math
Enter Lab 1 name:: chemistry
Enter skill information
Enter 1 skill :: dancer


Enter info. of Employee 2
Enter faculty information
Enter subject 1 name :: physics
Enter Lab 1 name:: workshop
Enter skill information
Enter 1 skill :: coder
Enter 2 skill :: gamer


Enter info. of Employee 3
Enter faculty information
Enter subject 1 name :: art
Enter Lab 1 name:: chemistry
Enter skill information
Enter 1 skill :: singer


Enter info. of Employee 4
Enter faculty information
Enter subject 1 name :: DSA
Enter Lab 1 name:: java
Enter skill information
Enter 1 skill :: developer


Enter info. of  Employee 5
Enter faculty information
Enter subject 1 name :: JAVA
Enter Lab 1 name:: dsa
Enter skill information
Enter 1 skill :: technician
Employee Id :: 100      Name:: Shivam   Department:: DesignDOB:: 12/2/2003      Year of Joining:: 2020  Phone Number:: 987654321
Skill list :: 
1 Skill :: dancer
Employee Id :: 100      Name:: Shivam   Department:: DesignDOB:: 12/2/2003      Year of Joining:: 2020  Phone Number:: 987654321
Subject and List Taught ::
Subject 1 name  is math
Lab 1 name  is chemistry
Employee Id :: 200      Name:: Ram      Department:: AccountingDOB:: 12/12/2002 Year of Joining:: 2019  Phone Number:: 157654321
Skill list ::
1 Skill :: coder
2 Skill :: gamer
Employee Id :: 200      Name:: Ram      Department:: AccountingDOB:: 12/12/2002 Year of Joining:: 2019  Phone Number:: 157654321
Subject and List Taught ::
Subject 1 name  is physics
Lab 1 name  is workshop
Employee Id :: 300      Name:: Shyam    Department:: ComputationDOB:: 24/4/2003 Year of Joining:: 2021  Phone Number:: 547654321
Skill list ::
1 Skill :: singer
Employee Id :: 300      Name:: Shyam    Department:: ComputationDOB:: 24/4/2003 Year of Joining:: 2021  Phone Number:: 547654321
Subject and List Taught ::
Subject 1 name  is art
Lab 1 name  is chemistry
Employee Id :: 400      Name:: Sonali   Department:: ManagementDOB:: 02/3/2003  Year of Joining:: 2018  Phone Number:: 987623321
Skill list ::
1 Skill :: developer
Employee Id :: 400      Name:: Sonali   Department:: ManagementDOB:: 02/3/2003  Year of Joining:: 2018  Phone Number:: 987623321
Subject and List Taught ::
Subject 1 name  is DSA
Lab 1 name  is java
Employee Id :: 500      Name:: riya     Department:: EletricianDOB:: 11/8/2003  Year of Joining:: 2020  Phone Number:: 983424321
Skill list ::
1 Skill :: technician
Employee Id :: 500      Name:: riya     Department:: EletricianDOB:: 11/8/2003  Year of Joining:: 2020  Phone Number:: 983424321
Subject and List Taught ::
Subject 1 name  is JAVA
Lab 1 name  is dsa
Enter Employee Id
500
Employee Id :: 500      Name:: riya     Department:: EletricianDOB:: 11/8/2003  Year of Joining:: 2020  Phone Number:: 983424321
Subject and List Taught ::
Subject 1 name  is JAVA
Lab 1 name  is dsa
Skill list ::
1 Skill :: technician
Employee Id :: 500      Name:: riya     Department:: EletricianDOB:: 11/8/2003  Year of Joining:: 2020  Phone Number:: 983424321
Subject and List Taught ::
Subject 1 name  is JAVA
Lab 1 name  is dsa
 */