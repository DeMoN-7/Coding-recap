public class fun2 {
    public static int GivSum(int a,int b){
        return a+b;
    }
    public static int GivMul(int a,int b){
        return a*b;
    }
    public static void main(String[] args) {
        System.out.println("Main");
        int sum=GivSum(2,3);
        System.out.println("sum: "+ sum);
        int mul=GivMul(20,3);
        System.out.println("Mul: "+ mul);
    }
}
