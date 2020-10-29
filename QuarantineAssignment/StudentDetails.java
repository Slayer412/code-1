package QuarantineAssignment;

import java.util.*;
import java.io.*;

public class StudentDetails {
    public static void main(String[] args) {
        try {
            FileOutputStream fileOutputStream=new FileOutputStream("src/QuarantineAssignment/student.txt");
            ObjectOutputStream objectOutput = new ObjectOutputStream(fileOutputStream);

            List<Student> listStudent = new ArrayList<>();
            listStudent.add(new Student("Ravi", 19, "Male", "Anand", 1234567890));
            listStudent.add(new Student("Maharshi", 19, "Male", "Ahemdabad", 1234567890));
            listStudent.add(new Student("Arth", 19, "Male", "Ahemdabad", 1234567890));
            listStudent.add(new Student("Vraj", 19, "Male", "Ahemdabad", 1234567890));

            for (Student student : listStudent) {
                objectOutput.writeObject(student);
            }

            objectOutput.close();

            FileInputStream fileInputStream=new FileInputStream("src/QuarantineAssignment/student.txt");
            ObjectInputStream objectInput = new ObjectInputStream(fileInputStream);
            Student student;
            System.out.println(fileInputStream.available());
            while (fileInputStream.available()>0) {
                student=(Student) objectInput.readObject();
                if(student.getCity().equals("Ahemdabad")){
                    System.out.print(student.getName() + "\t");
                    System.out.print(student.getAge() + "\t");
                    System.out.print(student.getGender() + "\t");
                    System.out.print(student.getCity() + "\t");
                    System.out.print(student.getMobNo() + "\t");
                    System.out.println();
                }
            }
            objectInput.close();

        } catch (Exception ex) {
            System.out.println(ex);
        }
    }
}

class Student implements Serializable{
    private String name;
    private int age;
    private String gender;
    private String city;
    private int mobNo;

    public Student(String name, int age, String gender, String city, int mobNo) {
        this.name = name;
        this.age = age;
        this.gender = gender;
        this.city = city;
        this.mobNo = mobNo;
    }

    public String getName() {
        return name;
    }

    public int getAge() {
        return age;
    }

    public String getGender() {
        return gender;
    }

    public String getCity() {
        return city;
    }

    public int getMobNo() {
        return mobNo;
    }

}