
public class concat_of_array_optim {
    public static void main(String[] args) {
        int []arr={1,2,3};
        int []nums=new int[arr.length*2];
        for (int i=0;i<arr.length;i++){
            nums[i]=arr[i];
            nums[i+arr.length]=arr[i];
        }
        for (int i : nums) {
            System.out.print(i+" ");
        }

    }    
}
