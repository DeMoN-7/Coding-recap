public class plus_one {
    static int []plus_on(int []digits){
        int n = digits.length;
        digits[n - 1] += 1;

        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] == 10) {
                digits[i] = 0;
                if (i > 0) {
                    digits[i - 1] += 1;
                } else {
                    int[] newDigits = new int[n + 1];
                    newDigits[0] = 1;
                    return newDigits;
                }
            }
        }

        return digits;

    }

    public static void main(String[] args) {
        int[] a = { 9, 9 };
        int[] x = plus_on(a);
        for (int i : x)
            System.out.println(i);
    }
}
