/*
Write another base class Payment which stores the payment details of the registered
Student. Payment has a single attribute paymentID which is unique for each payment.
PaymentDD, PaymentUPI, and PaymentNB extends the Payment class, these classes stores
 details of payment using Demand Draft, UPI, and Net Banking. Add relevant
attributes to these classes to store payment details. Make each attribute protected and
provide suitable getter and setter to access attributes
 */
// import java.util.Scanner;

class payment{
    protected int payment_id;
}
class PaymentDD extends payment{
    String bank_branch;
    String to_pay;
    Double amount;
    void dd(String b,String t,Double a,int p){
        bank_branch=b;
        to_pay=t;
        amount=a;
        payment_id=p;
    }
    void display(){
        System.out.println("Payment using DD ");
        System.out.println("Branch Name :: "+bank_branch);
        System.out.println("Payment Id :: "+payment_id);
        System.out.println("To pay :: "+to_pay);
        System.out.println("Amount :: "+amount+"\n\n");
    }
}

class PaymentUPI extends payment{
    String bank_branch;
    String to_pay;
    int account_number;
    Double amount;
    void dd(String b,String t,Double a,int p,int an){
        bank_branch=b;
        to_pay=t;
        amount=a;
        payment_id=p;
        account_number=an;
    }
    void display(){
        System.out.println("Payment using UPI ");
        System.out.println("Branch Name :: "+bank_branch);
        System.out.println("Payment Id :: "+payment_id);
        System.out.println("To pay :: "+to_pay);
        System.out.println("Account number :: "+account_number);
        System.out.println("Amount :: "+amount+"\n\n");
    }
}

class PaymentNB extends payment{
    String bank_branch;
    String to_pay;
    int account_number;
    Double amount;
    void dd(String b,String t,Double a,int p,int an){
        bank_branch=b;
        to_pay=t;
        amount=a;
        payment_id=p;
        account_number=an;
    }
    void display(){
        System.out.println("Payment using Net Banking ");
        System.out.println("Branch Name :: "+bank_branch);
        System.out.println("Payment Id :: "+payment_id);
        System.out.println("To pay :: "+to_pay);
        System.out.println("Account number :: "+account_number);
        System.out.println("Amount :: "+amount+"\n\n");
    }
}
public class pm {
    public static void main(String arg[]){
        // payment p;
        PaymentDD p=new PaymentDD();
        p.dd("SBI","Dean",2300.0,1234567);
        PaymentUPI u=new PaymentUPI();
        u.dd("UBI","Dean",5300.0,4356788,965349916);
        PaymentNB n=new PaymentNB();
        n.dd("HDFC","Dean",1450.0,7834879,35672892);
        p.display();
        u.display();
        n.display();

    }
    
}
//output
/*
Payment using DD 
Branch Name :: SBI
Payment Id :: 1234567
To pay :: Dean
Amount :: 2300.0


Payment using UPI
Branch Name :: UBI
Payment Id :: 4356788
To pay :: Dean
Account number :: 965349916
Amount :: 5300.0


Payment using Net Banking
Branch Name :: HDFC
Payment Id :: 7834879
To pay :: Dean
Account number :: 35672892
Amount :: 1450.0
 */