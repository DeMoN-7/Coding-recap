import java.util.Scanner;

public class linearSearch {
    static int  search(int []arr,int num){
        for(int i=0;i<arr.length-1;i++){
            if (arr[i]==num){
                return i;
            }
        }
        return -1;
    }
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter the size of array:");
        int n=sc.nextInt();
        int[] array=new int[n];
        System.out.println("Enter element of array:");
        for(int i=0;i<n;i++){
            array[i]=sc.nextInt();
        }
        System.out.println("Enter number you want to search:");
        int num=sc.nextInt();
        int index=search(array, num);
        if (index>=0) {
            System.out.println("Found at index:"+search(array,num));
        }
        else{
            System.out.println("Not found");
        }

    }
}
