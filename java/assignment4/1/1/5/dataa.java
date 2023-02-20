//Shivam kumar Gupta
//20214082
//CSE-d
class MyProgram{
    int getTotal( int b[][]){
        int sum=0;
        for( int i=0; i<b.length ; i++){
            for( int j=0; j<b[i].length; j++){
                sum+=b[i][j];
            }
        }
        return sum;
    }
    float getAverage( int b[][]){
        float avg=0f;
        int flag=0;
        for( int i=0; i<b.length ; i++){
            for( int j=0; j<b[i].length; j++){
                avg = (avg*flag + b[i][j])/(flag+1);
                flag++;
            }
        }
        return avg;
    }
    int getRowTotal( int b[][], int rowNumber){
        int sum=0;
        for( int i=0; i<b[rowNumber].length; i++){
            sum+=b[rowNumber][i];
        }
        return sum;
    }
    int getColumnTotal( int b[][],int columnNumber){
        int sum=0;
        for( int i=0; i<b.length; i++){
            sum+=b[i][columnNumber];
        }
        return sum;
    }
    int getHighestInRow( int b[][], int rowNumber){
        int max=b[rowNumber][0];
        for( int i=0; i<b[rowNumber].length; i++){
            if(max<b[rowNumber][i]){
                max=b[rowNumber][i];
            }
        }
        return max;
    }
    int getLowestInRow( int b[][], int rowNumber){
        int min=b[rowNumber][0];
        for( int i=0; i<b[rowNumber].length; i++){
            if(min>b[rowNumber][i]){
                min=b[rowNumber][i];
            }
        }
        return min;
    }
}
public class dataa {

    public static void main(String[] args) {
        int a[][] = {{11,32,13,42,15},{71,83,49,10,11}};
        for ( int i=0; i<a.length; i++){
            for( int j=0; j<a[i].length; j++){
                System.out.print(a[i][j]+" ");
            }
            System.out.print("\n");
        }
        MyProgram p = new MyProgram();
        System.out.println("Total : "+p.getTotal(a));
        System.out.println("Average : "+p.getAverage(a));
        System.out.println("1st row total : "+p.getRowTotal(a,0));
        System.out.println("1st column total : "+p.getColumnTotal(a,0));
        System.out.println("Highest in 2nd row : "+p.getHighestInRow(a,1));
        System.out.println("Lowest in 2nd row : "+p.getLowestInRow(a,1));
    }
}
//output
/*
11 32 13 42 15 
71 83 49 10 11
Total : 337
Average : 33.7
1st row total : 113
1st column total : 82
Highest in 2nd row : 83
Lowest in 2nd row : 10
*/