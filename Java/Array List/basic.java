import java.util.*;
public class basic {
public static void main(String[] args) {
    ArrayList<Integer> list=new ArrayList<>();
    list.add(0); // to add element on list at last
    list.add(2); 
    list.add(3); 
    list.add(4); 
    list.add(5);
    System.out.println(list); // array list can be simply printed without using any loop
    
    // to get element by index we have function get in array list
    
    System.out.println(list.get(3)); //this function return the element at the 3rd index 

    // add function can also be used to add element in between of list 
    list.add(1,11);
    System.out.println(list);

    // to change element at certain index
    list.set(0, 55);
    System.out.println(list);

    //get size of list 
    System.out.println(list.size());

    //delete element at last index

    list.remove(2);
    System.out.println(list);

}    
}
