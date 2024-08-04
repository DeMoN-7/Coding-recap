//    *
//   **
//  ***
// ****
public class invertedAndRotatedPyramid {
    public static void main(String[] args) {
        System.out.println("Pattern: ");
        int l=4;
        for(int i=1;i<=l;i++){
            for(int j=l-1;j>=i;j--){
                System.out.print(" ");
                
            }
            for(int k=1;k<=i;k++){
                System.out.print("*");
            }
            
            System.out.println();
        }
    }
}
