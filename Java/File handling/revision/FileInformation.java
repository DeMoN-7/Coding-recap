import java.io.File;

public class FileInformation {
    public static void main(String[] args) {
        File f=new File("File1.txt");
        if (f.exists()){
            System.out.println("File exists");
        }
        else{
            System.out.println("File not found");
        }
    }    
}
