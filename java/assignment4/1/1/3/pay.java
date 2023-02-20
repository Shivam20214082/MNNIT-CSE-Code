//Shivam Kumar Gupta
//20214082
//CSE-D

import java.util.Scanner;
class Payroll {
    int id[] = { 5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 7580489 };
    int hour[] = new int[7];
    double payRate[] = new double[7];
    double wages[] = new double[7];
    Scanner s = new Scanner(System.in);

    void getdata() {
        int i=0;
        for (i = 0; i < 7; i++) {
            System.out.println("Employee ID :: " + id[i]);
            System.out.print("Enter Hours :: ");
            hour[i] = s.nextInt();
            if(hour[i]<0){
                System.out.println("Invalid time");
                break;
            }
            System.out.print("Enter PayRate :: ");
            payRate[i] = s.nextInt();
            if(payRate[i]<6){
                System.out.println("Invalid PayRate");
                break;
            }
            System.out.println();
            wages[i] = hour[i] * payRate[i];
        }
        if(i==7)
        setdata();
    }

    void setdata() {
        for (int i = 0; i < 7; i++) {
            System.out.print("Employee ID :: " + id[i]);
            System.out.print("\tEmployee Wages :: " + wages[i]);
            System.out.println();
        }
    }

    void scan(int data) {
        int i=0;
        for (i = 0; i < 7; i++) {
            if (data == id[i]) {
                System.out.print("Employee ID :: " + id[i]);
                System.out.print("\tEmployee Wages :: " + wages[i]);
                System.out.println();
                break;
            }
        }
        if(i==7){
            System.out.println("Invalid Id");
        }
    }
}

public class pay {
    public static void main(String ar[]){
        Scanner s=new Scanner(System.in);
        Payroll p=new Payroll();
        p.getdata();
        System.out.println("Enter Employee ID");
        p.scan(s.nextInt());
    }
}
//output
/*
Employee ID :: 5658845
Enter Hours :: 2
Enter PayRate :: 34

Employee ID :: 4520125
Enter Hours :: 3
Enter PayRate :: 24

Employee ID :: 7895122
Enter Hours :: 3
Enter PayRate :: 46

Employee ID :: 8777541
Enter Hours :: 4
Enter PayRate :: 21

Employee ID :: 8451277
Enter Hours :: 5
Enter PayRate :: 23

Employee ID :: 1302850
Enter Hours :: 6
Enter PayRate :: 12

Employee ID :: 7580489
Enter Hours :: 8
Enter PayRate :: 34

Employee ID :: 5658845  Employee Wages :: 68.0
Employee ID :: 4520125  Employee Wages :: 72.0
Employee ID :: 7895122  Employee Wages :: 138.0
Employee ID :: 8777541  Employee Wages :: 84.0
Employee ID :: 8451277  Employee Wages :: 115.0
Employee ID :: 1302850  Employee Wages :: 72.0
Employee ID :: 7580489  Employee Wages :: 272.0
Enter Employee ID
1302850
Employee ID :: 1302850  Employee Wages :: 72.0
 */
