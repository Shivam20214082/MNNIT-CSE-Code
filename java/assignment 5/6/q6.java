import java.util.Scanner;

class Employee {
    int employeeID;
    String name;
    String departmet;
    String Dob;
    int yearOfJoining;
    int phone_number;

    Employee(int employeeID, String name, String departmet, String Dob, int yearOfJoining, int phone_number) {
        this.employeeID = employeeID;
        this.name = name;
        this.departmet = departmet;
        this.Dob = Dob;
        this.yearOfJoining = yearOfJoining;
        this.phone_number = phone_number;
    }

    Employee() {
    }

    void display() {
        System.out.println("Employee Id :: " + employeeID + "\tName:: " + name + "\tDepartment:: " + departmet
                + "DOB:: " + Dob + "\tYear of Joining:: " + yearOfJoining + "\tPhone Number:: " + phone_number);
    }
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
            System.out.println("Enter " + (i + 1) + " subject or lab name");
            a[i] = s.nextLine();
        }
    }

    void display() {
        System.out.println("Subject and List Taught :: ");
        for (int i = 0; i < no_of_lab + no_of_subject; i++) {
            System.out.println((i + 1) + " subject or lab name " + a[i]);
        }
    }
    Faculty() {

    }
}

class OfficeStaff extends Employee {
    int no_of_skill;
    String a[] = new String[5];

    OfficeStaff(int no_of_skill) {
        this.no_of_skill = no_of_skill;

        Scanner s = new Scanner(System.in);
        for (int i = 0; i < no_of_skill; i++) {
            System.out.println("Enter " + (i + 1) + " skill");
            a[i] = s.nextLine();
        }
    }

    void display() {
        System.out.println("Skill list :: ");
        for (int i = 0; i < no_of_skill; i++) {
            System.out.println((i + 1) + " Skill :: " + a[i]);
        }
    }
    int s(){
        return no_of_skill;
    }
    OfficeStaff() {
    }
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
    int a;

    String tostring() {
        if(a==0)
            return "Unskilled";
        else 
        return null;
    }

    void check(int x) {
        a = x;
    }
}

class SkilledStaff extends OfficeStaff {
    int a;

    String tostring() {
        if(a==1)
            return "skilled";
        else 
        return null;
    }

    void check(int x) {
        a = x;
    }
}

public class q6 {
    public static void main(String arg[]) {
        Scanner s = new Scanner(System.in);
        Employee[] e;
        e = new Employee[6];
        OfficeStaff[] o = new OfficeStaff[6];
        Faculty[] f = new Faculty[6];
        HOD[] hod = new HOD[6];
        DDPC[] ddpc = new DDPC[6];
        DMPC[] dmpc = new DMPC[6];
        DUGC[] dugc = new DUGC[6];
        UnSkilledStaff[] u = new UnSkilledStaff[6];
        SkilledStaff[] ss = new SkilledStaff[6];
        System.out.println("Enter info. of Employee 1");
        o[0] = new OfficeStaff(2);
        f[0] = new Faculty(1, 1);
        System.out.println("Enter info. of Employee 2");
        o[1] = new OfficeStaff(2);
        f[1] = new Faculty(1, 1);
        System.out.println("Enter info. of Employee 3");
        o[2] = new OfficeStaff(2);
        f[2] = new Faculty(1, 1);
        System.out.println("Enter info. of Employee 4");
        o[3] = new OfficeStaff(2);
        f[3] = new Faculty(1, 1);
        System.out.println("Enter info. of  Employee 5");
        o[4] = new OfficeStaff(2);
        f[4] = new Faculty(1, 1);
        System.out.println("Enter info. of  Employee 6");
        o[5] = new OfficeStaff(2);
        f[5] = new Faculty(1, 1);
        for (int i = 0; i < 6; i++) {
            hod[i] = new HOD("Ram");
            ddpc[i] = new DDPC("Shyam");
            dmpc[i] = new DMPC("Rahul");
            dugc[i] = new DUGC("Shivam");
        }

        for (int i = 0; i < 6; i++) {
            e[i].display();
            o[i].display();
            f[i].display();
            System.out.println("HoD:: "+hod[i].toString());
            System.out.println("DDPC:: "+ddpc[i].toString());
            System.out.println("DMPC:: "+dmpc[i].toString());
            System.out.println("DUGC:: "+dugc[i].toString());
        }

    }

}
