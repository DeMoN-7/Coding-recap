import java.util.ArrayList;

public class justRevision {
    public static void main(String[] args) {
        ArrayList<Integer> list=new ArrayList<>();
        list.add(21);
        list.add(32);
        list.add(12);
        list.add(52);
        System.out.println(list);

        for (int x:list){
            System.out.println(x*100);
        }

        System.out.println(list.get(0));
        System.out.println("Size:"+list.size());
        list.add(0,11);
        System.out.println(list);

        for (int i=0;i<list.size();i++){
            for(int j=0;j<list.size();j++){
                if(list.get(i)<list.get(j)){
                    int temp=list.get(i);
                    // list.
                }
            }
        }
    }
}
