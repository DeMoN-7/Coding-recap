
class student {
    int stuId;
    String name;
    static String Dean;
    void show(){
        System.out.println(stuId);
        System.out.println(name);
        System.out.println(Dean);
    }
    
}
public class staticVariable {
    

    public static void main(String[] args) {
       
        student Ayush = new student();
        Ayush.name = "Ayush";
        Ayush.stuId = 14;
        Ayush.Dean = "Kamal";
        
        student Aman=new student();
        Aman.name="Aman";
        Aman.stuId=12;
        Aman.Dean="Ramesh";
        
        // Aman.Dean="Mukesh";
        
        Ayush.show();
        System.out.println();
        Aman.show();
    }
}
