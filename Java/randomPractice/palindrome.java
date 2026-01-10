import java.util.Scanner;

public class palindrome {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number");
        int num1 = sc.nextInt();
        int temp = num1, rev = 0;
        while (temp != 0) {
            rev = (rev * 10) + temp % 10;
            temp = temp / 10;

        }
        if (rev == num1) {
            System.out.println("Palindrome");
        }
        else{
            System.out.println("Not Palindrome");
        }
    }
}