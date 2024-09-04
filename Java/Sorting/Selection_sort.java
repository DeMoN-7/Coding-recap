public class Selection_sort {
    public static void printArray(int []arr){
        for (int i=0;i<arr.length;i++){
            System.out.print(arr[i]+" ");
        }
        System.out.println();
    }
    public static int []sort(int [] arr){
        for (int i=0;i<arr.length;i++){
            int key_indx=i;
            
            for (int j=i+1;j<arr.length;j++){
                if(arr[j]<arr[key_indx]){
                    key_indx=j;
                    
                }
            }
            int temp=arr[i];
                arr[i]=arr[key_indx];
                arr[key_indx]=temp;
        }
        return arr;
    }
    public static void main(String[] args) {
        System.out.println("Selection sort: ");
        int[] arr={7,8,33,12,1};
        System.out.println("Before sorting: ");
        printArray(arr);
        int[]z=sort(arr);
        System.out.println("After sorting");
        printArray(z);
    }
}
