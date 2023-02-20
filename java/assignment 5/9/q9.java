class employee {
    String emp_name;
    String emp_number;
    String hire_date;
    employee(){

    }
}
class production_worker extends employee{
    int shift;
    double hpr;
    
    
   
    
}
class teamleader extends production_worker{
    String a;
    double monthly_bonous_amount;
    double required_timeinhours;
    double completed_timeinhours;
    teamleader(double monthly_bonous_amount,double required_timeinhours,double completed_timeinhours){
        this.monthly_bonous_amount=monthly_bonous_amount;
        this.required_timeinhours=required_timeinhours;
        this.completed_timeinhours=completed_timeinhours;
    }
    void setempdata(String emp_name, String emp_number, String hire_date){
        // employee e=new employee(emp_name, emp_number, hire_date);
        this.emp_name=emp_name;
        this.emp_number=emp_number;
        this.hire_date=hire_date;
    }
    void setpwdata(int shi,double hpr){
        this.shift=shi;
        this.hpr=hpr;
        if(shift==1){
            a="Day";
        }
        else if(shift==2){
            a="Night";
        }
        else{
            this.a="Invalid";
        }
    }
    void getdata(){
        System.out.println("Employee name:: "+emp_name+"\nEmployee number:: "+emp_number+"\nHire date:: "+hire_date+"\nShift:: "+a+"\nHourly per rate:: "+hpr);
        if(required_timeinhours==completed_timeinhours){
            System.out.println("\nMontly bonous:: "+monthly_bonous_amount);
        }
        else{
            System.out.println("NO Montly bonous");
        }
    }
}

public class q9 {
    public static void main(String arg[]){
        teamleader p=new teamleader(240.0,230,220);
        p.setempdata("Shivam", "1234-D", "12/02/2019");
        p.setpwdata(2, 176.0);
        p.getdata();
    }
}
//output
/*
Employee name:: Shivam
Employee number:: 1234-D
Hire date:: 12/02/2019
Shift:: Night
Hourly per rate:: 176.0
NO Montly bonous
*/