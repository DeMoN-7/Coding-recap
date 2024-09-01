import java.util.Scanner;

public class Reverse_string_using_StringBuilder {
 public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);
    StringBuilder sb=new StringBuilder();
    
    String ss=sc.nextLine();
    sb.append(ss);
    System.out.println(sb);
    
    for(int i=0;i<sb.length()/2;i++){
        char temp=sb.charAt(i);
        sb.setCharAt(i, sb.charAt(sb.length()-1-i));
        sb.setCharAt(sb.length() - 1 - i, temp);
    }
    System.out.println(sb);
 }   
}
