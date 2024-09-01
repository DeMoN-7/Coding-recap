public class StringBUilder {
    public static void main(String[] args) {
        StringBuilder sb= new StringBuilder("hello");
        System.out.println(sb);
        // change character at 
        sb.setCharAt(0,'W');
        System.out.println(sb);
        // insert 
        System.out.println(sb.insert(0, "Sh"));
        System.out.println(sb);
        // Delete element
        sb.delete(2, 4);
        System.out.println(sb);
        sb.append(22);
    }
}
