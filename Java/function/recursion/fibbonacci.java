// 0 1 1 2 3 5 8 13
public class fibbonacci {
    static int fibbo(int n){
        if (n==0){
            return 0;
        }
        else if (n==1){
            return 1;
        }
        return fibbo(n-1)+fibbo(n-2);

    }
    public static void main(String[] args) {
        int []arr= new int[10];
        for (int i=0;i<=9;i++){
            arr[i]=fibbo(i);
        }
        for (int i=0;i<=9;i++){
            System.out.print(arr[i]+" ");
        }
    }
}
