public class dynamicSlidingWindow {
    public static void main(String[] args) {
        int [] arr={2,3,1,2,4,3};
        int target=7;
        int l=0,r=0,sum=0,maxLen=0;

        while (r<arr.length) {
            sum+=arr[r];
            while (sum>target) {
                sum-=arr[l];
                l++;
            }
            if (sum<=target) {
                maxLen=Math.max(maxLen,r-l+1);
            }
            r=r+1;
        }
        System.out.println(maxLen);
    }
}
