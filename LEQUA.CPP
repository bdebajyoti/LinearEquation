#include<iostream.h>
#include<conio.h>
/*
3x + 5y=22---------(i)  x5
5x + 3y=26---------(ii) x3

15x + 25y =110------(iii)
15x + 9y  =78-------(iv)

We deduct (iii)-(iv), we get

=>25y-9y=110-78
=>16y=32
=>y=32/16
Therfore, y=2
Now,
We Put The Value Of y in (i), we get
=>3x + 5y=22
=>3x + 5*2=22
=>3x + 10=22
=>3x=22-10
=>x=12/3
Theefore, x=4

Thus, We found the value of,
x=4
y=2
*/
void sol(int,int,int,int,int,int);
void main()
{
int x1,x2,y1,y2,r1,r2;
clrscr();
cout<<"\nInput The Linear Equation As According To The Format Given\n";
cout<<"\n1.Input The Co-efficient Of Literals";
cout<<"\n2.Input The Resultant Value Of Each Equation";
cout<<"\nNow Lets Input The Values";
cout<<"\nEnter The Coefficient Of Equation-1 And Constant:";
cout<<"\nX1=";cin>>x1;
cout<<"\nY1=";cin>>y1;
cout<<"\nConstant-1=";cin>>r1;
cout<<"\nEnter The Coefficient Of Equation-2 And Constant:";
cout<<"\nX2=";cin>>x2;
cout<<"\nY2=";cin>>y2;
cout<<"\nConstant-2=";cin>>r2;
cout<<"\nYour Entered Equations Are";
cout<<endl<<x1<<"x+"<<y1<<"y="<<r1;
cout<<endl<<x2<<"x+"<<y2<<"y="<<r2;
sol(x1,y1,r1,x2,y2,r2);
getch();
}
void sol(int x1,int y1,int r1,int x2,int y2,int r2)
{
int x,y,t1,t2;
t1=x1;
t2=x2;
x1=x1*t2;
y1=y1*t2;
r1=r1*t2;
x2=x2*t1;
y2=y2*t1;
r2=r2*t1;
if(x1==x2)
{
y=(r1-r2)/(y1-y2);
x1=x1/x2;
y1=(y1/t2)*y;
r1=r1/t2;
x=(r1-y1)/t1;
cout<<"\nThe Result Is Given Below\n";
cout<<"\nValue Of X="<<x;
cout<<"\nValue Of Y="<<y;
}
else
{
cout<<"\nError In Calculation";
}
}