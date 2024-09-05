public class print5num {
    static void num(int n){
        if(n>=0){{
            System.out.print(n+" ");
            num(n-1);
        }}
    }
public static void main(String[] args) {
    System.out.println("Printing number using recursion");
    num(5);
}    
}
