public class print_even_index_char {
    public static void main(String[] args) {
        String a="LoremIpsum";
        for(int i=0;i<a.length();i++){
            if(i%2==0){
                System.out.print(a.charAt(i));
            }
        }
    }   
}
