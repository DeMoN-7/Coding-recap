public class Link_list {

    Node head;

    class Node {
        String data;
        Node next;

        Node(String data) {
            this.data = data;
            this.next = null;
        }
    }

    public void addFirst(String data) {
        Node new_node = new Node(data);
        if (head == null) {
            head = new_node;
            return;
        }
        new_node.next = head;
        head = new_node;
    }

    public void addLast(String data) {
        Node new_node = new Node(data);
        if (head == null) {
            head = new_node;
            return;
        }
        Node temp = head;
        while (temp.next != null) {
            temp = temp.next;
        }
        temp.next = new_node;

    }

    public void deleteLastNode(){
        if (head==null) {
            System.out.println("List is already empty");
            return;
        }
        Node temp=head;
        while (temp.next.next!=null) {
            temp=temp.next;
        }
        temp.next=null;

    }

    public void printList() {
        if (head == null) {
            System.out.println("List is empty");
        } else {
            Node temp = head;
            while (temp != null) {
                System.out.print(temp.data+"->");
                temp = temp.next;
            }
            System.out.println("null");
        }
    }

    public static void main(String[] args) {
        Link_list list = new Link_list();

        list.addLast("DJ");
        list.addLast("DJd");
        list.addLast("DJdd");
        list.addLast("DJddd");
        list.printList();
        list.deleteLastNode();
        list.printList();
        
    }
}