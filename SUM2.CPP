#include<iostream.h>
#include<conio.h>
class first
{
public:
long int a,b,c;
void input()
{
cout<<"Enter first number:";
cin>>a;
cout<<"Enter Second Number:";
cin>>b;
}
int calc()
{
c=a+b;
return 0;
}
void display()
{
clrscr();
cout<<"First number:"<<a<<endl;
cout<<"second number:"<<b<<endl;
cout<<"\nSum is "<<c;
}
};
void main()
{
clrscr();
first x;
x.input();
x.calc();
x.display();
getch();
}