import java.util.Arrays;

public class fristNonRepeatingChar {
    public static void main(String[] args) {
        String s="CareercKunj";
        s=s.toLowerCase();
        char [] x=s.toCharArray();
        // Arrays.sort(x);
        for(char z:x){
            if(s.indexOf(z)==s.lastIndexOf(z)){
                System.out.println(z);
                break;
            }
        }
        
    }
}
