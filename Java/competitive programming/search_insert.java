public class search_insert {
    static int search_inse(int []nums,int target){
        int n=nums.length;
        if(n==0)
        return 0;
        else{
            if(target>nums[n-1]){
                return n;
            }
            int x=0;
            for(int i:nums){
                if (target<=i){
                    return x ;
                }
                else{
                    x++;
                }

            }
        }
        return 0;
    }
    public static void main(String[] args) {
        int []arr={1,2,3,4,5};
        System.out.println(search_inse(arr, 6));
    }
}
