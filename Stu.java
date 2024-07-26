package Execsize;

import java.util.Objects;

public class Stu {
    int age;
    int grade;

    public Stu(int age, int grade) {
        this.age = age;
        this.grade = grade;
    }

    public Stu() {
    }

    public int getAge() {
        return age;
    }

    public void setAge(int age) {
        this.age = age;
    }

    public int getGrade() {
        return grade;
    }

    public void setGrade(int grade) {
        this.grade = grade;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) return true;
        if (o == null || getClass() != o.getClass()) return false;
        Stu stu = (Stu) o;
        return age == stu.age && grade == stu.grade;
    }

    @Override
    public int hashCode() {
        return Objects.hash(age, grade);
    }

    @Override
    public String toString() {
        return "Stu{" +
                "age=" + age +
                ", grade=" + grade +
                '}';
    }
}
