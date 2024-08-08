//     *****
//    *****
//   *****
//  *****
// *****


public class Solid_rohmbus {
    public static void main(String[] args) {
        System.out.println("Pattern: ");
        int n=6;
        for(int i=1;i<=n;i++){
            for(int j=n-i;j>0;j--){
                System.out.print(" ");
            }
            for(int j=1;j<=n;j++){
                System.out.print("*");
            }
            System.out.println();
        }
    }
}
