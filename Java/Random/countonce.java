import java.util.LinkedHashMap;
import java.util.LinkedHashSet;

public class countonce {
    public static void main(String[] args) {
        int arr[]={8, 8, 6, 5, 9, 9, 2};
        LinkedHashMap<Integer,Integer> ll=new LinkedHashMap<>();
        for(int i:arr){
            ll.put(i,ll.getOrDefault(i, 0)+1);
        }
        //  for (int key : ll.keySet()) {
        //     System.out.println(key + " -> " + ll.get(key));
        // }
        LinkedHashSet<Integer> ll2=new LinkedHashSet<>();
        for(int i:arr){
            ll2.add(i);
        }
        System.out.println(ll2.size());
    }
}
