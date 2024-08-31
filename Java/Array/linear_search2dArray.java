public class linear_search2dArray {
    public static void main(String[] args) {

        // program for linear search in 2d array
        int[][] arr = { { 1, 2, 3, 4, 5 }, { 21, 43, 54, 12, 43 } };
        int target=12;
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 5; j++) {
                System.out.print(arr[i][j] + " || ");
            }
            System.out.println();
        }
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 5; j++) {
                if(target==arr[i][j]){
                    System.out.println("Row: "+(i+1)+" Column: "+(j+1));
                }
            }
        }
    }
}
