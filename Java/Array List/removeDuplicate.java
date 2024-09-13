import java.util.*;
public class removeDuplicate {
    static ArrayList <Integer> rem(ArrayList<Integer>list){
        for(int i=0;i<list.size()-1;i++){
            if (list.get(i)==list.get(i+1)){
                list.remove(i);
                i--;
            }
        }
        return list;
    }
    public static void main(String[] args) {
        ArrayList <Integer> list= new ArrayList<>();
        list.add(1);
        list.add(1);
        list.add(2);
        list.add(2);
        list.add(2);
        list.add(2);
        list.add(3);
        System.out.println(rem(list));
         x[]=list.toArray();
        
    }
}
