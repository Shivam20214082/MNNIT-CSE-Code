import java.io.*;
import java.util.*;

class new2{
    public static void main(String ar[]){
        try{
            // File f=new File("C:\\Users\\shiva\\Desktop\\Dl and al\\tree\\5.txt");

            // f.createNewFile();

            FileReader f=new FileReader("C:\\Users\\shiva\\Desktop\\Dl and al\\tree\\7.txt");
            // FileWriter r=new FileWriter("C:\\Users\\shiva\\Desktop\\Dl and al\\tree\\7.txt");
            // // f.write("hii this file iis created by filewriter");
            // // f.close();

            // String a="C:\\Users\\shiva\\Desktop\\Dl and al\\tree\\7.txt";
            // int num[]={2,3,4,5,6,6,7,7,889,9};
            // f.write(Arrays.toString(num));
            // f.flush();
            // for(int i=0;i<num.length;i++){
            //     r.write(Integer.toString(num[i])+" ");
            // }
            // r.flush();
            System.out.println(f.read()==-1);
            Scanner s=new Scanner(f);
            int a[]=new int[20];
            int i=0;
            while(s.hasNext()){
                a[i++]=s.nextInt();
            }
            // System.out.println(a);
             for(int ii=0;ii<a.length&&a[ii]!=0;ii++){
                System.out.println(a[ii]);
             }





        }catch(Exception e){
            e.printStackTrace();
        }
    }
}