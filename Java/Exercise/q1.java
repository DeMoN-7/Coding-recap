import java.util.Scanner;

public class q1 {
    
    public static void avg(float num1,float num2,float num3){
        System.out.println("Average of three number: "+ (num1+num2+num3)/3);
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter three number:");
        float num1,num2,num3;
        num1= sc.nextFloat();
        num2= sc.nextFloat();
        num3= sc.nextFloat();
        avg(num1,num2,num3);
    }    

}
