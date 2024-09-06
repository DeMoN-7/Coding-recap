public class tower_of_hanoi {
    static void T_O_h(int disk, String source, String helper, String destination) {
        if (disk == 0)
            return;
        if (disk == 0)
            System.out.println("Transfer disk " + disk + " from " + source + " to " + destination);
        T_O_h(disk - 1, source, destination, helper);
            System.out.println("Transfer disk " + disk + " from " + source + " to " + destination);
        T_O_h(disk - 1, helper, source, destination);
    }

    public static void main(String[] args) {    
        int n=3;
        T_O_h(n, "S", "H", "D");
    }
}
