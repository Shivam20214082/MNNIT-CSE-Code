import java.util.Scanner;
public class jarray {
    static int inputArray( int a[][]){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter dimension of matrix: ");
        int dim = sc.nextInt();
        System.out.println("Enter Jagged array :");
        for( int i=0; i<dim; i++){
            System.out.println("Enter row "+(i+1)+" elements");
            for( int j=0; j<dim ; j++){
                a[i][j] = sc.nextInt();
            }
        }return dim;
    }
    public static void main(String[] args) {
        int arr[][] = new int[20][20];
        int size = inputArray(arr);
        int t[][] = new int[size][size];
        for(int i=0; i<size; i++){
            for(int j=0; j<size; j++){
                t[i][j] = arr[j][i];
            }
        }
        int merge[][] = new int[size][2*size];
        for(int i=0; i<size; i++){
            for(int j=0; j<size; j++){
                merge[i][j]=arr[i][j];
            }
            int temp=0;
            for(int k=size; k<2*size; k++){
                merge[i][k]=t[i][temp];
                temp++;
            }
        }
        // Printing arrays
        //Original Array
        System.out.println("\nArray is:");
        for(int i=0; i<size; i++){
            for(int j=0; j<size; j++){
                if(arr[i][j]<0){
                    continue;
                }
                System.out.print(arr[i][j]+" ");
            }
            System.out.println(" ");
        }
        //Transpose array:
        System.out.println("\nTranspose array is :");
        for(int i=0; i<size; i++){
            for(int j=0; j<size; j++) {
                if (t[i][j] < 0) {
                    continue;
                }
                System.out.print(t[i][j]+" ");
            }

            System.out.println(" ");
        }
        //Merged Array:
        System.out.println("\nMerged Array is ");
        for(int i=0; i<size; i++){
            for(int j=0; j<2*size; j++){
                if(merge[i][j] < 0){
                    continue;
                }
                System.out.print(merge[i][j]+" ");
            }
            System.out.println(" ");}
    }
}
//output
/*
Enter dimension of matrix: 
3
Enter Jagged array :
Enter row 1 elements
1
2
3
Enter row 2 elements
4
5
6
Enter row 3 elements
3
2
1

Array is:
1 2 3
4 5 6
3 2 1

Transpose array is :
1 4 3
2 5 2
3 6 1

Merged Array is
1 2 3 1 4 3
4 5 6 2 5 2
3 2 1 3 6 1  
 */