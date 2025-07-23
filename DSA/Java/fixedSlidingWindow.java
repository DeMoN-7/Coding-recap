public class fixedSlidingWindow {
    public static void main(String[] args) {
        int[] arr = { -1, 2, 3, 4, 5, 2, -1, 6, 6,7 };
        int start = 0;
        int k = 4;
        int end=k-1;
        int sum=0;
        while(end<arr.length){
            int temp=0;
            for(int i=start;i<=end;i++){
                temp+=arr[i];

            }
            if (temp>sum) {
                sum=temp;
            }
            end++;
            start++;
        }
        System.out.println(sum);
    }
}
