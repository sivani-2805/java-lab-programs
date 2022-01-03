class Room 
{
int length,breadth;
void ar()
{
length=5;
breadth=4;
}
void ar(int l)
{
length=l;
breadth=5;
}
void ar(int l,int b)
{
length=l;
breadth=b;
}
int area()
{
return length*breadth;
}
}
class Overloading
{
public static void main(String arg[])
{
int area;
Room r=new Room();
r.ar();
area=r.area();
System.out.println("the area of room is"+area);
r.ar(10);
area=r.area();
System.out.println("the area of room is"+area);
r.ar(20,30);
area=r.area();
System.out.println("the area of room is"+area);
}
}




