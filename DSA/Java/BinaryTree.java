import java.util.ArrayList;
import java.util.List;

public class BinaryTree {
    static class Node{
        int data;
        Node left;
        Node right;
        Node(int data){
            this.data=data;
            this.left=null;
            this.right=null;
        }
    }
    static class CreateBinaryTree{
        static int idx=-1;
        public static Node BuildTree(int []nodes){
             idx++;
             if (nodes[idx]==-1) {
                return null;
             }
             Node newNode= new Node(nodes[idx]);
             newNode.left =BuildTree(nodes);
             newNode.right=BuildTree(nodes);
             return newNode;
        }
    }
    public static void preorder(Node root){
        if (root==null) {
            return;
        }
        System.out.print(root.data+" ");
        preorder(root.left);
        preorder(root.right);
    }
    static ArrayList<Integer> list=new ArrayList<>();
    public static void inorder(Node root){
        if (root==null) {
            return;
        }
        inorder(root.left);
        list.add(root.data);
        System.out.print(root.data+" ");
        inorder(root.right);
    }

    public static void postorder(Node root){
        if (root==null) {
            return;
        }
        postorder(root.left);
        postorder(root.right);
        System.out.print(root.data+" ");
    }
    
    public static void main(String[] args) {
        int []nodes={1, 2, 4, -1, -1, 3, -1, -1, 5, 6, -1, -1, 55, -1, -1};
        CreateBinaryTree cbt=new CreateBinaryTree();
        Node root=cbt.BuildTree(nodes);
        System.out.println(root.data);
        System.out.println("Preorder");
        preorder(root);
        System.out.println("\nInorder");
        inorder(root);
        System.out.println("\nPostorder");
        postorder(root);
        System.out.println("\nArrayList");
        System.out.println(list);
    }
}
