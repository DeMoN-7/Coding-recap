public class row_with_max_ones_leetCode {
    public static int[] row(int[][] mat) {
        int arr[] = new int[2];
        int len = mat.length - 1;
        int j = mat[0].length-1, i = 0;
        while (j >= 0 && i <=len) {
            if (mat[i][j] == 1) {
                j--;
            } else {
                i++;
            }
        }
        arr[0]=(i > len) ? i - 1 : i;
        arr[1]=mat[0].length - (j + 1);
        return arr;
    }

    public static void main(String[] args) {
        // int[][] arr = { { 0, 0, 1 }, { 0, 1, 1 }, { 0, 0, 0 }, { 1, 1, 1 } };
        // int[][] arr = { { 0, 0, 1 }, { 0, 1, 1 }};
        // int[][] arr = { { 0, 0}, { 1, 1 },{0,0}};
        int[][] arr = { { 0, 1}, { 1, 0 },{0,0}};
        int []z=row(arr);
        System.out.println(z[0]);
        System.out.println(z[1]);
    }
}
