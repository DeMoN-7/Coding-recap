public class print_sum_number {
    static int sum(int num,int i){
        if(i==num){
            return 0;
        }
        return sum(num,i-1)+i;
    }
    public static void main(String[] args) {
        int sum=sum(0,5);
        System.out.println(sum);
    }    
}
// public class print_sum_number {
//     static int sum(int num){
//         if (num==1)
//         return 1;
//         else
//         return sum(num-1)+num;
//     }
//     public static void main(String[] args) {
//         int sum=sum(5);
//         System.out.println(sum);
//     }    
// }
