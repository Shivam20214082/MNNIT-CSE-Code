// import java.util.Scanner;
class Employee {
    String name, department, position;
    int id_number;

    void mutator(String a, String b, int c, String d) {
        name = a;
        department = b;
        id_number = c;
        position = d;
    }

    void accessor() {
        System.out.print("Employee name : " + name);
        System.out.print("\tDepartment : " + department);
        System.out.print("\t\tEmployee id : " + id_number);
        System.out.println("\t\tEmployee position : " + position+"\n");
    }

    Employee(String a, String b, int c, String d) {
        name = a;
        department = b;
        id_number = c;
        position = d;
    }

    Employee(String a, int c) {
        name = a;
        id_number = c;
    }

    Employee() {
    }
}

class Emp {
    public static void main(String a[]) {
        Employee s1=new Employee("Susan Mayers","Accounting",47899,"Vice president");
        Employee s2=new Employee("mark jones",39119);
        s2.department="IT";
        s2.position="Programmer";
        Employee s3=new Employee();
        s3.mutator("Joy Rogers","Manufacturing",81774,"Engineer");
        s1.accessor();
        s2.accessor();
        s3.accessor();
    }
}       

//output
/*
Employee name : Susan Mayers    Department : Accounting         Employee id : 47899             Employee position : Vice president

Employee name : mark jones      Department : IT         Employee id : 39119             Employee position : Programmer

Employee name : Joy Rogers      Department : Manufacturing              Employee id : 81774             Employee position : Engineer

 */