import javax.swing.JOptionPane;
class Employee
{
String name;
int id;
String designation;
void reademp()
{
  id=Integer.parseInt(JOptionPane.showInputDialog("enter id"));
  name=JOptionPane.showInputDialog("enter name");
  designation=(JOptionPane.showInputDialog("enter designation"));
}
}
class Salary extends Employee
{
int bp;
int hra;
int da;
int pf;
void readslary()
{
 bp=Integer.parseInt(JOptionPane.showInputDialog("enter bp"));
 hra=Integer.parseInt(JOptionPane.showInputDialog("enter hra"));
 da=Integer.parseInt(JOptionPane.showInputDialog("enter da"));
 pf=Integer.parseInt(JOptionPane.showInputDialog("enter pf"));
}
void calculatesalary()
{
int np;
np=(bp+hra+da)-pf;
System.out.println("salary:"+"="+np);
}
void displayemp()
{
 System.out.println("NAME:"+name+" "+"ID:"+id+" "+"DESIGNATION:"+designation);
}
}
class Netsalary1
{
public static void main(String args[])
{
Salary s=new Salary();
s.reademp();
s.displayemp();
s.readslary();
s.calculatesalary();
}
}
