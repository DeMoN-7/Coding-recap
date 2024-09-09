
public class removeElement {
    public static void main(String[] args) {
        int []arr={3,2,2,3};
        // int []arr1=new int[arr.length];
        int key=3;
        int z=0;
        for (int i=0;i<arr.length;i++){
            if (arr[i]!=key){
                arr[z]=arr[i];
                z++;
            }
        }
        System.out.println(z);
        System.out.println();
        for (int i=0;i<arr.length;i++){
            
            System.out.println(arr[i]);
        }
    }    
}
