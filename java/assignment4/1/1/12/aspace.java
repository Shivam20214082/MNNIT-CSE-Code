public class aspace{
    public static void main(String[] args) {
        String para ="sasdxfcghjkikjhfdgvbnmlbhaksjkhjgjkahjkhjkhgkfjfhjvnhjhgfjnl";
        int chunkSize = 5;
        int size=0;
        char data[] = para.toCharArray();
        int length = data.length;
        String tokens[] = new String[100];
        for(int i=0; i<length; i=i+chunkSize){
            tokens[size] = new String(data, i,
                    Math.min(chunkSize,length-i));
            size++;
        }
        for(int i=0; i< size; i++){
            for( int j=i+1; j<size; j++){
                if(tokens[i].compareTo(tokens[j])>0){
                    String temp = tokens[j];
                    tokens[j]=tokens[i];
                    tokens[i]=temp;
                }
            }
        }
        for( int i=0; i< size-1; i++){
            if(tokens[i].equals(tokens[i+1])){
                for( int j=i ; j< size-1; j++){
                    tokens[j]=tokens[j+1];
                }
                i--;
                size--;
            }
        }
        for( int i=0; i<size; i++){
            System.out.print(tokens[i]+" ");}
    }
}
//output
/*
ahjkh aksjk fcghj fdgvb fjfhj gfjnl hjgjk jkhgk kikjh nmlbh sasdx vnhjh
*/