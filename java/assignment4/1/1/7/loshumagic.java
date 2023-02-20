import java.util.Scanner;
public class loshumagic{
    static boolean isMagicSquare( int a[][] ){
        int sumRow[] = new int[3];
        int sumColumn[] = new int[3];
        int sumDiag[] = new int[2];
        boolean one=true;
        boolean two=true;
        int sum=0;
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                if(i==j){
                    sumDiag[0]+=a[i][j];
                }
                if(i+j==2){
                    sumDiag[1]+=a[i][j];
                }
                sumRow[i]+=a[i][j];
                sumColumn[i]+=a[j][i];
            }
        }
        sum=sumRow[0];
        for(int i=0; i<3; i++){
            if(sum!=sumRow[i] || sum!=sumColumn[i]){
                one=false;
            }
        }
        for(int i=0; i<2; i++){
            if(sum!=sumDiag[i]){
                two=false;
            }
        }
        if(one==true && two==true){
            return true;
        }
        else{
            return false;
        }
    }
    public static void main(String[] args) {
        int msq[][] = new int[3][3];
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Matrix:");
        for(int i=0; i<3; i++){
            System.out.println("Enter "+(i+1)+" row element");
            for(int j=0; j<3; j++){
                msq[i][j] = sc.nextInt();
            }
        }
        if(isMagicSquare(msq)){
            System.out.println("yes it is Magic Square!");
        }
        else{
            System.out.println("No it is not Magic Square....");
        };
    }
}

//output
/*
Enter Matrix:
Enter 1 row element
1
2
3
Enter 2 row element
4
5
6
Enter 3 row element
7
8
9
No it is not Magic Square....
 */