import java.io.File;
import java.io.IOException;

public class file1 {

    public static void main(String[] args) {
        try{
            File f=new File("File1.txt");
            if (f.createNewFile()) {
                System.out.println("File created");
            }
        }catch(IOException e){
            System.out.println("File not found");
        }
    }
}