public class FloydsTriangle {
    public static void main(String[] args) {
        System.out.println("Pattern");
        int num=1;
        for(int i=1;i<=5;i++){
            for(int j=1;j<=i;j++){
                System.out.print(" "+num++);
            }
            System.out.println();
        }
    }
}
