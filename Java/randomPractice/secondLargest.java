public class secondLargest {
    public static void main(String[] args) {
        int [] arr={22,12,43,31,2,515,76,11};
        int largest=arr[0],secondlargest=0;  
        for(int x:arr){
            if(x>largest){
                secondlargest=largest;
                largest=x;
            }
            else if (x<largest && x>secondlargest) {
                secondlargest=x;
            }
        }
        System.out.println(secondlargest);
    }
}
