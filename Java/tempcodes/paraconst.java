class Student{
    String name;
    int age;
    Student(String name1 ,int age1){
        this.name=name1;
        this.age=age1;
        // System.out.println(name1);
        // System.out.println(age1);
    }
    void printDetails(){
        System.out.println(name);
        System.out.println(age);
    }
}
public class paraconst {
    public static void main(String[] args) {
        Student obj=new Student("Ayush",21);
        obj.printDetails();
    }    
}
