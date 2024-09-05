public class factorial {
    static int facto(int n){
        if(n==1){
            return 1;
        }
        return n*facto(n-1);
    }
    public static void main(String[] args) {
        int fact=facto(3);
        System.out.println(fact);
    }
}
