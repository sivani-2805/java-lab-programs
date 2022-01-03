final class Car
{
final int a=5;
void method()
{
a=15;
System.out.println(+a);
}
final void car()
{
System.out.println("it is a car of 4 seater");
}
}
class Bike extends Car
{
Void car()
{
System.out.println("scooter is a 2 seater");
}
}
class Final
{
public static void main(String arg[])
{
Bike b=new Bike();
b.method();
b.car();
}
}

