import java.util.HashMap;

public class Hash_Map {
    public static void main(String[] args) {
        HashMap<Integer,String>map=new HashMap<>();
        // int[]arr={1,2,2,3,3,3};
        // for(int i=0;i<arr.length;i++)
        map.put(1, "Ayush");
        map.put(2, "Siddhant");
        map.put(3, "Aman");
        map.put(4, "Bibhav");
        System.out.println(map);
        map.put(3, "Mukesh");
        System.out.println(map);
        System.out.println(map.containsKey("Ayush"));
        System.out.println(map.get(1));
    }
}
