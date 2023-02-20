import java.util.Scanner;

class Employee {
    int employeeID;
    String name;
    String departmet;
    String Dob;
    int yearOfJoining;
    int phone_number;     
}

class Faculty extends Employee {
    int no_of_subject;
    int no_of_lab;
    String a[] = new String[10];

    Faculty(int no_of_subject, int no_of_lab) {
        this.no_of_subject = no_of_subject;
        this.no_of_lab = no_of_lab;
        Scanner s = new Scanner(System.in);
        for (int i = 0; i < no_of_lab + no_of_subject; i++) {
            System.out.println("Enter subject "+(i+1)+" name ");
            a[i] = s.nextLine();
        }
    }

    void setdata(int employeeID, String name, String departmet, String Dob, int yearOfJoining, int phone_number) {
        this.employeeID = employeeID;
        this.name = name;
        this.departmet = departmet;
        this.Dob = Dob;
        this.yearOfJoining = yearOfJoining;
        this.phone_number = phone_number;
    }
    void display() {
        System.out.println("Employee Id :: " + employeeID + "\tName:: " + name + "\tDepartment:: " + departmet+ "DOB:: " + Dob + "\tYear of Joining:: " + yearOfJoining + "\tPhone Number:: " + phone_number); 
        System.out.println("Subject and List Taught :: ");
        for (int i = 0; i < no_of_lab + no_of_subject; i++) {
            System.out.println(" subject "+(i+1)+" name " + a[i]);
        }
    }
    Faculty() {}
}

class OfficeStaff extends Employee {
    int no_of_skill;
    String a[] = new String[5];
}

class HOD extends Faculty {
    String name;

    String tostring() {
        return name;
    }

    HOD(String name) {
        this.name = name;
    }
}

class DUGC extends Faculty {
    String name;

    String tostring() {
        return name;
    }

    DUGC(String name) {
        this.name = name;
    }
}

class DMPC extends Faculty {
    String name;

    String tostring() {
        return name;
    }

    DMPC(String name) {
        this.name = name;
    }
}

class DDPC extends Faculty {
    String name;

    String tostring() {
        return name;
    }

    DDPC(String name) {
        this.name = name;
    }
}

class UnSkilledStaff extends OfficeStaff {
    UnSkilledStaff(int no_of_skill){
        this.no_of_skill = no_of_skill;
        Scanner s = new Scanner(System.in);
        for (int i = 0; i < no_of_skill; i++) {
            System.out.println("Enter skill " + (i + 1));
            this.a[i] = s.nextLine();
        }
    }
    
    void display() {
        System.out.println("Employee Id :: " + employeeID + "\tName:: " + name + "\tDepartment:: " + departmet+ "DOB:: " + Dob + "\tYear of Joining:: " + yearOfJoining + "\tPhone Number:: " + phone_number);
        System.out.println("Skill list :: ");
        for (int i = 0; i < no_of_skill; i++) {
            System.out.println(" Skill "+(i+1)+" :: " + a[i]);
        }
    }
}

class SkilledStaff extends OfficeStaff {
    SkilledStaff(int no_of_skill){
        this.no_of_skill = no_of_skill;
        Scanner s = new Scanner(System.in);
        for (int i = 0; i < no_of_skill; i++) {
            System.out.println("Enter skill " + (i + 1));
            this.a[i] = s.nextLine();
        }
    }
    
    void display() {
        System.out.println("Employee Id :: " + employeeID + "\tName:: " + name + "\tDepartment:: " + departmet+ "DOB:: " + Dob + "\tYear of Joining:: " + yearOfJoining + "\tPhone Number:: " + phone_number);
        System.out.println("Skill list :: ");
        for (int i = 0; i < no_of_skill; i++) {
            System.out.println(" Skill "+(i+1)+" :: " + a[i]);
        }
    }
}

public class q6a {
    public static void main(String arg[]) {
        Scanner s = new Scanner(System.in);
        OfficeStaff[] o = new OfficeStaff[6];
        Faculty[] f = new Faculty[6];
        HOD[] hod = new HOD[6];
        DDPC[] ddpc = new DDPC[6];
        DMPC[] dmpc = new DMPC[6];
        DUGC[] dugc = new DUGC[6];
        UnSkilledStaff[] u = new UnSkilledStaff[6];
        SkilledStaff[] ss = new SkilledStaff[6];
        System.out.println("Enter info. of Employee 1");
        u[0] = new UnSkilledStaff(0);
        f[0] = new Faculty(1, 1);
        f[0].setdata(100,"Shivam","Design","12/2/2003",2020,987654321);
        System.out.println("Enter info. of Employee 2");
        ss[1] = new SkilledStaff(1);
        f[1] = new Faculty(1, 1);
        f[1].setdata(200,"Ram","Accounting","12/12/2002",2019,157654321);
        System.out.println("Enter info. of Employee 3");
        ss[2] = new SkilledStaff(1);
        f[2] = new Faculty(1, 1);
        f[2].setdata(300,"shyam","coder","3/12/2004",2019,1576542541);
        System.out.println("Enter info. of Employee 4");
        u[3] = new UnSkilledStaff(0);
        f[3] = new Faculty(1, 1);
        f[3].setdata(400,"Sonali","Management","02/3/2003",2018,987623321);
        System.out.println("Enter info. of  Employee 5");
        u[4] = new UnSkilledStaff(0);
        f[4] = new Faculty(1, 1);
        f[4].setdata(500,"riya","Eletrician","11/8/2003",2020,983424321);
        System.out.println("Enter info. of  Employee 6");
        ss[5] = new SkilledStaff(1);
        f[5] = new Faculty(1, 1);
        f[5].setdata(600,"Shyam","Computation","24/4/2003",2021,547654321);
        for (int i = 0; i < 6; i++) {
            hod[i] = new HOD("Ram");
            ddpc[i] = new DDPC("Shyam");
            dmpc[i] = new DMPC("Rahul");
            dugc[i] = new DUGC("Shivam");
        }

        for (int i = 0; i < 6; i++) {
            f[i].display();
            System.out.println("HoD:: "+hod[i].tostring());
            System.out.println("DDPC:: "+ddpc[i].tostring());
            System.out.println("DMPC:: "+dmpc[i].tostring());
            System.out.println("DUGC:: "+dugc[i].tostring());
        }

    }

}
//output
/*
Enter info. of Employee 1
Enter subject 1 name 
math
Enter subject 2 name 
physics
Enter info. of Employee 2
Enter skill 1
gamer
Enter subject 1 name 
math
Enter subject 2 name 
chemistry
Enter info. of Employee 3
Enter skill 1
singer
Enter subject 1 name 
art
Enter subject 2 name 
biology
Enter info. of Employee 4
Enter subject 1 name
chemistry
Enter subject 2 name 
art
Enter info. of  Employee 5
Enter subject 1 name
math
Enter subject 2 name 
physics
Enter info. of  Employee 6
Enter skill 1
coder
Enter subject 1 name 
art
Enter subject 2 name 
math
Employee Id :: 100      Name:: Shivam   Department:: DesignDOB:: 12/2/2003      Year of Joining:: 2020  Phone Number:: 987654321
Subject and List Taught :: 
 subject 1 name math
 subject 2 name physics
HoD:: Ram
DDPC:: Shyam
DMPC:: Rahul
DUGC:: Shivam
Employee Id :: 200      Name:: Ram      Department:: AccountingDOB:: 12/12/2002 Year of Joining:: 2019  Phone Number:: 157654321
Subject and List Taught ::
 subject 1 name math
 subject 2 name chemistry
HoD:: Ram
DDPC:: Shyam
DMPC:: Rahul
DUGC:: Shivam
Employee Id :: 300      Name:: shyam    Department:: coderDOB:: 3/12/2004       Year of Joining:: 2019  Phone Number:: 1576542541
Subject and List Taught ::
 subject 1 name art
 subject 2 name biology
HoD:: Ram
DDPC:: Shyam
DMPC:: Rahul
DUGC:: Shivam
Employee Id :: 400      Name:: Sonali   Department:: ManagementDOB:: 02/3/2003  Year of Joining:: 2018  Phone Number:: 987623321
Subject and List Taught ::
 subject 1 name chemistry
 subject 2 name art
HoD:: Ram
DDPC:: Shyam
DMPC:: Rahul
DUGC:: Shivam
Employee Id :: 500      Name:: riya     Department:: EletricianDOB:: 11/8/2003  Year of Joining:: 2020  Phone Number:: 983424321
Subject and List Taught ::
 subject 1 name math
 subject 2 name physics
HoD:: Ram
DDPC:: Shyam
DMPC:: Rahul
DUGC:: Shivam
Employee Id :: 600      Name:: Shyam    Department:: ComputationDOB:: 24/4/2003 Year of Joining:: 2021  Phone Number:: 547654321
Subject and List Taught ::
 subject 1 name art
 subject 2 name math
HoD:: Ram
DDPC:: Shyam
DMPC:: Rahul
DUGC:: Shivam
 */