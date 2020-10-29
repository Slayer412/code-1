package QuarantineAssignment;

import java.io.*;
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class AddressBook {

    FileOutputStream fileOutputStream;
    FileInputStream fileInputStream;
    ObjectOutputStream objectOutput;
    ObjectInputStream objectInput;
    Scanner scanner;

    public AddressBook() {
        scanner = new Scanner(System.in);
    }

    private void addPerson() {
        String name;
        int age;
        String gender;
        String city;
        int mobNo;
        System.out.println("Enter Name, Age, Gender(M/F), City, Mobile No respectively :");
        name = scanner.next();
        age = scanner.nextInt();
        gender = scanner.next();
        city = scanner.next();
        mobNo = scanner.nextInt();
        List<Person> list = getAll();
        list.add(new Person(name, age, gender, city, mobNo));
        add(list);
    }

    private void add(List<Person> list) {
        try {
            fileOutputStream = new FileOutputStream("src/QuarantineAssignment/addressbook.txt");
            objectOutput = new ObjectOutputStream(fileOutputStream);
            for (Person person : list) {
                objectOutput.writeObject(person);
            }
            objectOutput.close();
            fileOutputStream.close();
        } catch (Exception e) {
            System.out.println(e);
        }
    }

    private List<Person> searchPerson() {
        List<Person> list = getAll();
        List<Person> toDisplay = new ArrayList<>();
        System.out.println("Enter person name: ");
        String name = scanner.next();
        for (Person person : list) {
            if (person.getName().equals(name))
                toDisplay.add(person);
        }
        return toDisplay;
    }

    private void editPerson() {
        List<Person> search= searchPerson();
        if(search.isEmpty()){
            System.out.println("Person does not exist");
        }
        else{
            String name=search.get(0).getName();
            String newName;
            int age;
            String gender;
            String city;
            int mobNo;
            System.out.println("Enter new Name, Age, Gender(M/F), City, Mobile No respectively :");
            newName = scanner.next();
            age = scanner.nextInt();
            gender = scanner.next();
            city = scanner.next();
            mobNo = scanner.nextInt();
            List<Person> oldList=getAll();
            List<Person> newList=new ArrayList<>();
            for(Person person:oldList){
                if(person.getName().equals(name))
                    newList.add(new Person(newName,age,gender,city,mobNo));
                else
                    newList.add(person);
            }
            add(newList);
        }


    }

    private void displayAllDetails() {
        List<Person> list = getAll();
        for (Person person : list) {
            System.out.print(person.getName() + "\t");
            System.out.print(person.getAge() + "\t");
            System.out.print(person.getGender() + "\t");
            System.out.print(person.getCity() + "\t");
            System.out.print(person.getMobNo() + "\t");
            System.out.println();
        }
    }

    private void display() {
        List<Person> list = searchPerson();
        if (list.isEmpty()) {
            System.out.println("No person found.");
        } else {
            System.out.println("Following are search results");
            for (Person person : list) {
                System.out.print(person.getName() + "\t");
                System.out.print(person.getAge() + "\t");
                System.out.print(person.getGender() + "\t");
                System.out.print(person.getCity() + "\t");
                System.out.print(person.getMobNo() + "\t");
                System.out.println();
            }
        }

    }

    private List<Person> getAll() {
        List<Person> list = new ArrayList<Person>();
        try {
            fileInputStream = new FileInputStream("src/QuarantineAssignment/addressbook.txt");
            objectInput = new ObjectInputStream(fileInputStream);
            while (fileInputStream.available() > 0) {
                list.add((Person) objectInput.readObject());
            }
        } catch (Exception e) {
            System.out.println(e);
        }

        return list;
    }

    public static void main(String[] args) {
        AddressBook addressBook = new AddressBook();
        Scanner scanner = new Scanner(System.in);
        do {
            int choice;
            System.out.print("1.Add person\n2.Edit Person\n3.Search person\n4.Display All persons\n0 for Exit\nYour choice: ");
            choice = scanner.nextInt();
            switch (choice) {
                case 0:
                    System.exit(0);
                case 1:
                    addressBook.addPerson();
                    break;
                case 2:
                    addressBook.editPerson();
                    break;
                case 3:
                    addressBook.display();
                    break;
                case 4:
                    addressBook.displayAllDetails();
                    break;
                default:
                    System.out.println("Thik se number dial kar.....");
            }
        }
        while (true);
    }

}

class Person implements Serializable {
    private String name;
    private int age;
    private String gender;
    private String city;
    private int mobNo;

    public Person(String name, int age, String gender, String city, int mobNo) {
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

    public void setName(String name) {
        this.name = name;
    }

    public void setAge(int age) {
        this.age = age;
    }

    public void setGender(String gender) {
        this.gender = gender;
    }

    public void setCity(String city) {
        this.city = city;
    }

    public void setMobNo(int mobNo) {
        this.mobNo = mobNo;
    }
}