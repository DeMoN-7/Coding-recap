// optimzed version for longest common prefix

import java.util.Arrays;

public class common_prefix {
    public static void main(String[] args) {
        String []a={"geek","geeksforgeeks","geekzer","geeks"};
        Arrays.sort(a);
        int len=a.length-1;
        String s1=a[0],s2=a[len],s3="";
        for(int i=0;i<s1.length();i++){
            if(s1.substring(0,i).equals(s2.substring(0,i))){
                s3=s1.substring(0,i);
            }
            else{
                break;
            }
        }
        System.out.println(s3);
    }
}
