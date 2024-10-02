public class peekElementArray {
    public static int peakEle(int n, int[] arr) {
        if (n ==1) {
            return 0;
        }
            for (int i = 0; i < n; i++) {
                
                if(i==0){
                    if (arr[i]>arr[i+1]) {
                        return i;
                    }
                } 
                if(i==n-1) {
                    if (arr[i] > arr[i - 1]) {
                        return i;
                    }
                }
                else{
                    if (arr[i] > arr[i + 1] && arr[i] > arr[i - 1]) {
                        return i;
                    }
                }
            }
        
        return -1;
    }


    public static void main(String[] args) {

        int[] arr = { 1, 2, 3 };
        int[] arr1 = { 1, 1, 1, 2, 1, 1, 1 };
        System.out.println(arr.length);
        System.out.println(peakEle(arr.length, arr));

    }
}
