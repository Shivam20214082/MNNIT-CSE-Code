import java.util.Scanner;
class MonthDays{
    int month,year;
    boolean leap(int x){
        if(x%4==0 && x%100!=0){
            return true;
        }
        else return false;
    }
    int getNumberOfDays(int a,int b){
        if(leap(b) && a==2){
            return 29;
        }
        else if(a==2){
            return 28;
        }
        else{
            if(a==1 || a==3 || a==5|| a==7 || a==8 || a==10 || a==12){
                return 31;
            }
            else return 30;
        }
    }
}
class md{
    public static void main(String arg[]){
        Scanner sr=new Scanner(System.in);
        System.out.print("Enter a month (1-12): ");
        int a=sr.nextInt();
        System.out.print("Enter year: ");
        int b=sr.nextInt();
        MonthDays m=new MonthDays();
        int day=m.getNumberOfDays(a,b);
        System.out.println("Number of day: "+day);

    }
}

//output
/*
Enter a month (1-12): 2
Enter year: 2009
Number of day: 28
 */