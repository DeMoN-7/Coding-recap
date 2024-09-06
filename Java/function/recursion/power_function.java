public class power_function {
    static int power(int x,int n){
        if(n==1){
            return 1;
        }
        return power(x,n-1)*x;
    }
    public static void main(String[] args) {
        int n=power(2,5);
        System.out.println(n);

    }
}
