/*Q11. Create a structure called Employee that includes three fields - a first 
name (type String), a last name (type String) and a monthly salary (double). 
Write functions to initialize the fields, print them and modify the values in 
the given object. Example methods:
 void emp_init(struct emp* e); 
 void set_salary(struct emp *e, double sal);
 void emp_display(struct emp *e);
Write the test code in the main(). Create two emp objects and display each 
object’s yearly salary. Then give each Employee a 10% raise and display 
each Employee’s yearly salary again*/

#include <iostream>
public class Employee {
    private String firstName;
    private String lastName;
    private double monthlySalary;

    public Employee(String firstName, String lastName, double monthlySalary) {
        this.firstName = firstName;
        this.lastName = lastName;
        if (monthlySalary >= 0) {
            this.monthlySalary = monthlySalary;
        }
    }

    public void setFirstName(String firstName) {
        this.firstName = firstName;
    }

    public String getFirstName() {
        return firstName;
    }

    public void setLastName(String lastName) {
        this.lastName = lastName;
    }

    public String getLastName() {
        return lastName;
    }

    public void setMonthlySalary(double monthlySalary) {
        if (monthlySalary >= 0) {
            this.monthlySalary = monthlySalary;
        }
    }

    public double getMonthlySalary() {
        return monthlySalary;
    }
}


public class EmployeeTest {
    public static void main(String[] args) {
        Employee joe = new Employee("Joe", "Rogan", 9696);
        Employee tod = new Employee("Tod", "Howard", 8595);
        System.out.println(joe.getFirstName() + "'s monthly salary is " + joe.getMonthlySalary());
        System.out.println(tod.getFirstName() + "'s monthly salary is " + tod.getMonthlySalary());
        joe.setMonthlySalary(joe.getMonthlySalary() * 1.1);
        tod.setMonthlySalary(tod.getMonthlySalary() * 1.1);
        System.out.println("Salary after 10% boost");
        System.out.println(joe.getFirstName() + "'s monthly salary is " + joe.getMonthlySalary());
        System.out.println(tod.getFirstName() + "'s monthly salary is " + tod.getMonthlySalary());
    }
}