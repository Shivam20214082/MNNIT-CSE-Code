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
    String a;
    production_worker(int shi,double hpr){
        shift=shi;
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
    void setdata(String emp_name, String emp_number, String hire_date){
        // employee e=new employee(emp_name, emp_number, hire_date);
        this.emp_name=emp_name;
        this.emp_number=emp_number;
        this.hire_date=hire_date;
    }
    void getdata(){
        System.out.println("Employee name:: "+emp_name+"\nEmployee number:: "+emp_number+"\nHire date:: "+hire_date+"\nShift:: "+a+"\nHourly per rate:: "+hpr);
    }
    
}

public class emp {
    public static void main(String arg[]){
        production_worker p=new production_worker(1, 240.0);
        p.setdata("Shivam", "1234-D", "12/02/2019");
        p.getdata();
    }
}
//output
/*
Employee name:: Shivam
Employee number:: 1234-D
Hire date:: 12/02/2019
Shift:: Day
Hourly per rate:: 240.0
 */
