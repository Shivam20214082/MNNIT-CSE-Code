import java.io.*;
import java.util.*;

public class cv2{
    public static int di(int x,int y){
        if(y%4==0 && y%100!=0){
            if(x==2){
                return 29;
            }
            else 
            return 28;
        }
        else if(x==1 ||x==3 ||x==7||x==8||x==10 ||x==12||x==5){
            return 31;
        }
        else return 30;
    }
    public static void main(String[] args) throws IOException{
        InputStreamReader s=new InputStreamReader(System.in);
        BufferedReader br=new BufferedReader(s);
        System.out.print("Enter Your name : ");
        String a=br.readLine();
        System.out.print("Enter Your Fathers name : ");
        String b=br.readLine();
        int i=0,j=0;
        int[] x =new int[3];
        int[] y =new int[3];

        //Entering DOB
        System.out.println("Enter Your Date of Birth : ");
        System.out.print("Year : ");
        x[2]=Integer.parseInt(br.readLine());
        System.out.print("Month : ");
        x[1]=Integer.parseInt(br.readLine());
        System.out.print("Date : ");
        x[0]=Integer.parseInt(br.readLine());


        //Entering today date
        System.out.println("Enter Your Date of Birth : ");
        System.out.print("Year : ");
        y[2]=Integer.parseInt(br.readLine());
        System.out.print("Month : ");
        y[1]=Integer.parseInt(br.readLine());
        System.out.print("Date : ");
        y[0]=Integer.parseInt(br.readLine());

        //calculating age
        int day,mon,year;
        if(y[0]>=x[0]){
            day=y[0]-x[0];
        }
        else{
            int k=di(x[1],x[2]);
            day=y[0]-x[0]+k;
            y[1]=y[1]-1;
        }
        if(y[1]>x[1]){
            mon=y[1]-x[1];
        }
        else{
            mon=y[1]+12-x[1];
            y[2]=y[2]-1;
        }
        if(y[2]>x[02]){
            year=y[2]-x[2];
        }
        else{
            year=-1;
        }

        System.out.println("Name of Student is : "+a);
        System.out.println("Fathers name is : "+b);
        System.out.println("Date of birth is : "+x[0]+"/"+x[1]+"/"+x[2]);
        if(year!=-1)
        System.out.println("Age is : Year-"+year+" Month-"+mon+" day-"+day);
        else System.out.println("Invalid DOB or current date");
    }
}

//output
/*
Enter Your name : Shivam Kumar Gupta
Enter Your Fathers name : Rajesh kumar gupta
Enter Your Date of Birth : 
Year : 2003
Month : 12
Date : 22
Enter Your Date of Birth : 
Year : 2022
Month : 09
Date : 22
Name of Student is : Shivam Kumar Gupta
Fathers name is : Rajesh kumar gupta
Date of birth is : 22/12/2003
Age is : Year-18 Month-9 day-0
 */