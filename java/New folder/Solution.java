import java.util.*;

class Solution {
    static int bsearch(int[] nums,int index, int target,int last) {
        // int last=nums.length;
        target=target-nums[index];
        int beg=index+1;
        // while(beg<=last){
        //     int mid=(beg+last)/2;
        //     if(nums[mid]==target){
        //         return mid;
        //     }
        //     else if(nums[mid]>target){
        //         last=mid-1;
        //     }
        //     else
        //        beg=mid+1;
        // }
        for(int j=beg;j<last;j++){
            if(nums[j]==target){
                return j;
            }
        }
        return -1;
    }

    public static void main(String arg[]){
        String a;
        int i=0,x;
        int []ar=new int[10];
        Scanner s=new Scanner(System.in);
        a=s.nextLine();
        x=s.nextInt();
        StringTokenizer st=new StringTokenizer(a,",");
        while(st.hasMoreTokens()){
            String s1=st.nextToken();
            ar[i++]=Integer.parseInt(s1);
        }

        for(int j=0;j<i;j++){
            int y=bsearch(ar,j,x,i);
            if(y!=-1){
                System.out.println(j+", "+y);
            }
        }
    }
}