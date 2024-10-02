public class row_with_max_ones {

    public static void main(String[] args) {
        int[][] arr = { { 0, 1, 1, 1 }, { 0, 0, 1, 1 }, { 1, 1, 1, 1 }, { 0, 0, 0, 0 } };
        int i = 0, j = arr[0].length - 1, r = arr.length - 1, max_row = -1;
        while (i < r && j >= 0) {

            if (arr[i][j] == 1) {
                max_row = i;
                j--;
            } else {
                i++;
            }
        }
        System.out.println(max_row);
    }
}