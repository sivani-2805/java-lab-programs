 import java.util.Scanner;
class Student
{
int id;
String n;
Scanner s=new Scanner(System.in);
void readInfo()
{

System.out.println("enter name");
n=s.nextLine();
System.out.println("enter id");
id=s.nextInt();
}
}
class Test extends Student
{
int m[]=new int[6];
void marks()
{
for(int i=0;i<6;i++)
{
System.out.println("enter marks of "+(i+1)+"th subject");
m[i]=s.nextInt();
}
}
}
class Result extends Test
{
int sum=0;
void res()
{
for(int i=0;i<6;i++)
{
sum=sum+m[i];
}
}
void displayTotal()
{
System.out.println("total marks of "+n+" is "+sum);
}
}
class Students
{
public static void main(String arg[])
{
int n;
Scanner p=new Scanner(System.in);
System.out.println("enter no of students");
n=p.nextInt();
Result e[]=new Result[n];
for(int i=0;i<e.length;i++)
{
e[i]=new Result();
e[i].readInfo();
e[i].marks();
e[i].res();
e[i].displayTotal();
}
}
}

