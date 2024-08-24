import java.util.Scanner;

public class factorial {
    public static int Factorial(int n){
        if(n==1){
            return 1;
        }
        return n*Factorial(n-1);
    }
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        int fact=Factorial(num);
        System.out.println(fact);
        sc.close();
    }
}
