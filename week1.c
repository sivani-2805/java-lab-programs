import java.util.Scanner;
class Employee
{
String name;
int id;
double salary;
int work;

void getinfo()
{
Scanner p=new Scanner(System.in);
System.out.println("enter id");
id=p.nextInt();
System.out.println("enter name");
name=p.next();
System.out.println("enter salary");
salary=p.nextDouble();
System.out.println("enter work");
work=p.nextInt();
}

void AddSal()
{
if(salary<500)
{
salary=salary+10;
System.out.println("final salary is"+salary);
}
else
{
System.out.println("final salary is"+salary);
}
}

void AddWork()
{
if(work>6)
{
salary=salary+5;
System.out.println("final salary is"+salary);
}
if (work<6)
{
System.out.println("final salary"+salary);
}
}
}

class EmployeeDemo
{
public static void main(String args[])
{
int k;
int j;
Scanner q=new Scanner(System.in);
System.out.println("Enter the no of employees");
k=q.nextInt();

Employee e[]=new Employee[k];
for(j=0;j<3;j++)
{
e[j]=new Employee();
e[j].getinfo();
e[j].AddSal();
e[j].AddWork();
}
}
}
