import java.util.ArrayList;

public class justRevision {
    public static void main(String[] args) {
        ArrayList<Integer> list=new ArrayList<>();
        list.add(21);
        list.add(32);
        System.out.println(list);

        for (int x:list){
            System.out.println(x*100);
        }

        System.out.println(list.get(0));
        System.out.println("Size:"+list.size());
    }
}
