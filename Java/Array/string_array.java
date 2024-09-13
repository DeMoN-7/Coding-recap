public class string_array {
    public static void main(String[] args) {
        String arr="ayush fsaasd  ";
        // String []str=arr.split(" ");
        // int n=str.length;
        // System.out.println(str[n-1].length());
        arr=arr.trim();
        int lastSpace=arr.lastIndexOf(" ");
        System.out.println(arr.length()-lastSpace-1);


    }
}
