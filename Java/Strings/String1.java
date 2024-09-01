public class String1 {
public static void main(String[] args) {
    String fname="Ayush";
    String fname1="Ayush";
    String ame="Ayush";
    ame="wewe";
    System.out.println(ame);
    String lname="Singh";
    System.out.println(fname+lname);
    System.out.println(fname+" "+lname);
    System.out.println("length: "+fname.length());
    System.out.println("CharAt: "+fname.charAt(2));
    System.out.println("substring: "+fname.substring(2));
    System.out.println("substring: "+fname.repeat(3));
    // repeat the string n number of counts
    System.out.println();
    System.out.println(fname.compareTo(lname));
    System.out.println(fname.compareTo(fname1));
}    
}
