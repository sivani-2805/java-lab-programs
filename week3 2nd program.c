class Time
{
int hours,min,sec;
Time()
{
hours=0;
min=0;
sec=0;
}
Time(int hours)
{
this.hours=hours;
min=0;
sec=0;
}
Time(int hours,int min)
{
this.hours=hours;
this.min=min;
sec=0;
}
Time(int hours,int min,int sec)
{
this.hours=hours;
this.min=min;
this.sec=sec;
}
void display()
{
System.out.println("hours="+hours+" "+"mins="+min+" "+"seconds="+sec);
}
public static void main(String args[])
{
Time t1=new Time();
Time t2=new Time(5);
Time t3=new Time(2,30);
Time t4=new Time(6,47,54);
t1.display();
t2.display();
t3.display();
t4.display();
}
}
