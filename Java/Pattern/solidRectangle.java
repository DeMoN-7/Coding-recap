public class solidRectangle {
    public static void main(String[] args) {
        System.out.println("Pattern:\n");
        for (int i = 1; i < 5; i++) {
            for (int j = 1; j < 6; j++) {
                System.out.print("*");
            }
            System.out.println();
        }
        System.out.println("\nAnother Way:\n");
        for (int i = 1; i < 5; i++) {
            System.out.println("*****");
        }
    }
}