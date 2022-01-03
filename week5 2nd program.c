class Figure
{
int d1,d2;
void area()
{
System.out.println("the area of the shape is undefined");
}
}
class Rectangle extends Figure
{
void area(int l,int b)
{
int area;
d1=l;
d2=b;
area=d1*d2;
System.out.println("the area of rectangle is"+area);
}
}
class Triangle extends Figure
{
void area(int b,int h)
{
double area;
d1=b;
d2=h;
area=0.5*d1*d2;
System.out.println("the area of triangle is"+area);
}
}
class Overriding
{
public static void main(String arg[])
{
Rectangle r=new Rectangle();
r.area(30,40);
Triangle t=new Triangle();
t.area(4,3);
}
}
