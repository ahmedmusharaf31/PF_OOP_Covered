class Person {
    private String p_name;
    private int p_age;

    public Person() {
        System.out.println("New Person Object Created!");
    }

    public void introduce() {
        System.out.println("Your name is: " + p_name);
        System.out.println("Your age is: " + p_age);
    }

    public void setName(String name) {
        p_name = name;
    }

    public void setAge(int age) {
        p_age = age;
    }

    public String getName() {
        return p_name;
    }

    public int getAge() {
        return p_age;
    }
}

class Teacher extends Person {
    private int t_salary;
    private String t_occupation;

    public void introduce() {
        System.out.println("Your name is: " + getName());
        System.out.println("Your age is: " + getAge());
        System.out.println("Your salary is: " + t_salary);
        System.out.println("Your occupation is: " + t_occupation);
    }

    public void setSalary(int salary) {
        t_salary = salary;
    }

    public void setOccupation(String occupation) {
        t_occupation = occupation;
    }
}

class Student extends Person {
    private int s_semester;

    public void introduce() {
        System.out.println("Your name is: " + getName());
        System.out.println("Your age is: " + getAge());
        System.out.println("Your current semester number is: " + s_semester);
    }

    public void setSemester(int semester) {
        s_semester = semester;
    }
}

public class Main {
    public static void main(String[] args) {
        Teacher teacher = new Teacher();
        teacher.setName("Dr. John");                      // Set teacher's name
        teacher.setAge(35);                               // Set teacher's age
        teacher.setSalary(90000);                         // Set teacher's salary
        teacher.setOccupation("Assistant Professor");     // Set teacher's occupation
        teacher.introduce();                              // Output teacher's details

        System.out.println();

        Student student = new Student();
        student.setName("Ahmed");               // Set student's name
        student.setAge(19);                     // Set student's age
        student.setSemester(2);                 // Set student's semester
        student.introduce();                    // Output student's details
    }
}
