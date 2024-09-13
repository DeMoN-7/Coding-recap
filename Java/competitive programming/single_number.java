public class single_number {
    static int numm(int []num){
        int flag=0;
        int count =0;
        for(int i:num){
            for (int j:num){
                if(i==j){
                    flag++;
                }
            }
            if(flag==1){
                return i;
            }
            else
            flag=0;
        }
        return 0;
    }
    public static void main(String[] args) {
        int []arr={4,1,2,1,2};
        System.out.println(numm(arr));
    }
}
