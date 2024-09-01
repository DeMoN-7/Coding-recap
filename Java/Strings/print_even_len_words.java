public class print_even_len_words {
    public static void main(String[] args) {
        String str="Only women children and dogs are loved unconditionally. A man is only loved under the condition that he provides something";
        String []arr=str.split(" ");
        for(int i=0;i<arr.length;i++){
            if (arr[i].length()%2==0){
                System.out.println  (arr[i]);
            }

        }
    }
}
