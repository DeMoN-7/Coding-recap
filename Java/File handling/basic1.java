import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;

public class basic1 {
    public static void main(String[] args) {
        // Creating new file 
        // File file = new File("file1.txt");
        // try{
        //     file.createNewFile();
        // }
        // catch(Exception e){
        //     System.out.println(e);
        // }

        // writing in file using append and write method 

        try {
            FileWriter fWriter=new FileWriter("file1.txt");
            fWriter.write("Jai Shree Ram");
            fWriter.append("\nKaise ho bhai");
            fWriter.close();
        } catch (IOException e) {
            e.printStackTrace();
        }


        // reading file
        File file=new File("file1.txt");
        try{
            Scanner sc= new Scanner(file);
            while (sc.hasNextLine()) {
                String str=sc.nextLine();
                System.out.println(str);

            }
        }
        catch(Exception e){
            System.out.println(e);
        }


    }
}