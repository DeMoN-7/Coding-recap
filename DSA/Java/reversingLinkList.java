public class reversingLinkList {
    Node head;
    public class Node{
        Node next;
        int data;
        Node(int data){
            this.data=data;
            this.next=null;
        }
    }
    public void addLast(int data){
        Node newNode= new Node(data);
        if (head==null) {
            head=newNode;
            return;
        }
        Node temNode=head;
        while (temNode.next!=null) {
            temNode=temNode.next;
        }
        temNode.next=newNode;

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
        reversingLinkList list=new reversingLinkList();

    }
}
