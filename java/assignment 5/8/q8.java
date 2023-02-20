import java.util.Scanner;
class employee {
    String emp_name;
    String emp_number;
    String hire_date;
    employee(){

    }
}
class shiftsupervisor extends employee{
    double anual_salary;
    double anual_bonous;
    shiftsupervisor(double as,double abs){
        anual_salary=as;
        anual_bonous=abs;
    }
    void setdata(String emp_name, String emp_number, String hire_date){
        // employee e=new employee(emp_name, emp_number, hire_date);
        this.emp_name=emp_name;
        this.emp_number=emp_number;
        this.hire_date=hire_date;
    }
    void getdata(int x){
        System.out.println("Employee name:: "+emp_name+"\nEmployee number:: "+emp_number+"\nHire date:: "+hire_date+"\nTotal anual salary::"+anual_salary);
        if(x==1){
            System.out.println("Anual bonous :: "+anual_bonous);
        }
        else{
            System.out.println("No Anual bonous");
        }
    }
    
}
public class q8 {
    public static void main(String arg[]){
        shiftsupervisor p=new shiftsupervisor(100000.0, 240.0);
        p.setdata("Shivam", "1234-D", "12/02/2019");
        System.out.println("If employee shift meets production goals then enter 1 otherwise enter 0");
        Scanner s=new Scanner(System.in);
        int a=s.nextInt();
        p.getdata(a);
    }
    
}
//output
/*
If employee shift meets production goals then enter 1 otherwise enter 0
1
Employee name:: Shivam
Employee number:: 1234-D
Hire date:: 12/02/2019
Total anual salary::100000.0
Anual bonous :: 240.0
 */