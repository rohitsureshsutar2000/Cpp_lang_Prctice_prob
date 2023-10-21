#include<iostream>
using namespace std;
class timeChange
{
	int h,m,s;
	public:

		timeChange(int,int,int);
		friend timeChange operator+(timeChange &,int);
		friend timeChange operator-(timeChange &,int);

		void display()
		{
			cout<<h<<":"<<m<<":"<<s<<endl;
		
		}
};

timeChange::timeChange(int x,int y,int z)
{
	h=x;
	m=y;
	s=z;
	
}
timeChange operator+(timeChange & x,int y)
{

	x.h=x.h+y;
	x.m=x.m+y;
	x.s=x.s+y;
	return x;
}
timeChange operator-(timeChange & x,int y)
{

	x.h=x.h-y;
	x.m=x.m-y;
	x.s=x.s-y;
	return x;
}


int main()
{
	timeChange t1(10,20,30);
	t1=t1+1;
	t1.display();
	t1=t1-2;
	t1.display();
	
	return 0;
}
