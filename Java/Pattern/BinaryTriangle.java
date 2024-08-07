/*
 * 1
 * 01
 * 101
 * 0101
 * 10101
 */
public class BinaryTriangle {
    public static void main(String[] args) {
        System.out.println("Pattern: ");
        for(int i=1;i<=5;i++){
            for(int j=1;j<=i;j++){
            if(i%2==0 && j%2==0 || i%2!=0 && j%2!=0){
                System.out.print("1");
            }
            else{
                System.out.print("0");
            }
            }
            System.out.println();
        }
    }
}
