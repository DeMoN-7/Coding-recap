public class Link_list {

    Node head;
    class Node{
        String data;
        Node next;
        Node(String data){
            this.data=data;
            this.next=null;
        }
    }

    public void addFirst(String data){
        Node new_node=new Node(data);
        if(head==null){
            head=new_node;
            return;
        }
        new_node.next=head;
        head=new_node;
    }
    public void printList()

    public static void main(String[] args) {
        Link_list list =new Link_list();
        list.addFirst("he");
        list.addFirst("hell");
        list.addFirst("hello");
    }
}