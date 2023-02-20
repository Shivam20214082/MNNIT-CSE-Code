class personal_information{
    String name;
    String address;
    int age;
    long phone_number;
    void mutator(String name,String address,int age,long phone_number){
        this.name=name;
        this.address=address;
        this.age=age;
        this.phone_number=phone_number;
    }
    void accessor(){
        System.out.print("Name: "+name);
        System.out.print("\t\tAddress: "+address);
        System.out.print("\t\tAge: "+age);
        System.out.println("\t\tPhone number: "+phone_number);
    }
    personal_information(){
    }
}

class pa{
    public static void main(String a[]){
        personal_information p1=new personal_information();
        personal_information p2=new personal_information();
        personal_information p3=new personal_information();
        p1.mutator("Shivam","Jaunpur",18,788788787);
        p2.mutator("Rakesh","Jaunpur",45,419094741);
        p3.mutator("Ram","varanshi",19,347863548);
        p1.accessor();
        p2.accessor();
        p3.accessor();
        
    }
}

//output
/*
Name: Shivam            Address: Jaunpur                Age: 18         Phone number: 788788787
Name: Rakesh            Address: Jaunpur                Age: 45         Phone number: 419094741
Name: Ram               Address: varanshi               Age: 19         Phone number: 347863548
 */