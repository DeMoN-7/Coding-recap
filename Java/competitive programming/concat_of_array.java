
public class concat_of_array {
    public static void main(String[] args) {
        int[] arr = { 1, 2, 3 };
        int x = 0;
        int[] num = new int[arr.length * 2];
        for (int i = 0; i < num.length; i++) {
            if (i == arr.length) {
                x = 0;
            }
            num[i] = arr[x];
            x++;
        }
        for (int i : num) {
            System.out.println(i);
        }
    }
}
