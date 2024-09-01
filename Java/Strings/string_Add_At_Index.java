public class string_Add_At_Index {
    public static void main(String[] args) {
        String first="AyushGreat";
        int index=4;
        String Ins="Is";
        String last=first.substring(0,index+1)+Ins+first.substring(index);        
        System.out.println(last);
    }
}
