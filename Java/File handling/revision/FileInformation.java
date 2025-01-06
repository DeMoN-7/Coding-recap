import java.io.File;

public class FileInformation {
    public static void main(String[] args) {
        File f=new File("File1.txt");
        if (f.exists()){
            System.out.print("Absolute path: ");
            System.out.println(f.getAbsolutePath());
            System.out.print("Name: ");
            System.out.println(f.getName());

        }
        else{
            System.out.println("File not found");
        }
    }    
}
