public class string_reverse {
    static void rev(String a,int indx){
        if (indx==0){
            System.out.print(a.charAt(indx)+" ");
            return;
        }
        else{
            System.out.print(a.charAt(indx)+" ");
             rev(a,indx-1);
        }
    }
    public static void main(String[] args) {
        String str="Aman";
        rev(str,str.length()-1);
    }
}
