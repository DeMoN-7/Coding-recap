// *****
// *   *
// *   *
// *****
public class hollowRectangle {
    public static void main(String[] args) {
        System.out.println("Pattern:");
        for (int i = 1; i <=4; i++) {
            for (int j = 1; j <=5; j++) {
                if (i == 2 || i == 3) 
                    if (j == 1 || j == 5) {
                        System.out.print("* ");
                    }
                    else if(j==2 || j==3 || j==4){
                        System.out.print("  ");
                    }
                
                if(i==1 || i==4){
                    System.out.print("* ");
                }
            }
            System.out.println();
        }

    }
}
