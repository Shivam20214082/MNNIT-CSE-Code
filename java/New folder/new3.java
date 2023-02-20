public class new3 {
    try{
        FileWriter f=new FileWriter("C:\\Users\\shiva\\Desktop\\java\\New folder\\2.txt");
        FileReader r=new FileReader("C:\\Users\\shiva\\Desktop\\java\\New folder\\1.txt");
        int i,x=0;
        Scanner s=new Scanner(r);
        String b="";
        while((i=r.read())!=-1){
            System.out.print((char)i);
            b+=(char)i;
            // f.write(i);
        }

        while(s.hasNextLine()){
            b+=s.next();
        }
        // StringTokenizer str=new StringTokenizer(b," ");
        // String a[]=new String[str.countTokens()];
        // while(str.hasMoreTokens()){
            String a=str.nextToken();
        //     a[x++]=Integer.parseint();

        // }
        System.out.println();
        System.out.println(b);
        
        // for(i=0;i<a.length;i++){
        //     for(int j=0;j<a.length-i-1;j++){
        //         if(a[j].compareToIgnoreCase(a[j+1])>0){
        //             String z=a[j];
        //             a[j]=a[j+1];
        //             a[j+1]=z;
        //         }
        //     }
        // }
        // for(i=0;i<a.length;i++){
        //     System.out.println(a[i]);
        //     f.write(a[i]+" ");
        //     f.write("");
        // }

        f.flush();
        f.close();
        s.close();

    }
    catch(Exception e){
        e.printStackTrace();
    }
}
