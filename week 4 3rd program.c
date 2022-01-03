import java.util.Scanner;
class Employee
{
String name;
int id;
float salary;
Scanner sc=new Scanner(System.in);
void readEmployment()
{
System.out.println("enter name");
name=sc.nextLine();
System.out.println("enter id");
id=sc.nextInt();
System.out.println("enter salary");
salary=sc.nextFloat();
}
void display()
{
System.out.println("the name of the employee="+name);
System.out.println("the id of the employee="+id);
System.out.println("the salary of the employee="+salary);
}
}
class Temporary extends Employee
{

double hike=0.035;

void incrementSalary()
{
super.display();
System.out.println("the temporray employee salary="+(salary+(salary * hike)));
}
}
class Permanent extends Employee
{

double hike=0.05;
void incrementSalary()
{
super.display();
System.out.println("the permanet employee salary="+(salary+(salary * hike)));
}
}
class Employees
{
public static void main(String args[])
{
Temporary t=new Temporary();
t.readEmployment()
t.incrementSalary();
Permanent p=new Permanent();
p.readEmployment();
p.incrementSalary();
}
}

