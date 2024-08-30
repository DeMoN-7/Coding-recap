import java.util.Scanner;

public class basic {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int []arr1=new int[3];
        System.out.println("Enter values");
        for(int i=0;i<3;i++){
            arr1[i]=sc.nextInt();

        }
        for(int i=0;i<3;i++){
            System.out.println(arr1[i]);

        }


    }    
}
