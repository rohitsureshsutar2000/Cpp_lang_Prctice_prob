#include<iostream>
using namespace std;

class date
{
	int mm,dd,yy;
	public:
	date();
	date(int ,int ,int);
	void set()
	{
		cout<<"enter date";
		cin>>dd;
		
		cout<<"enter month";
		cin>>mm;
		
		cout<<"enter year";
		cin>>yy;
	}
	void display()
	{
		cout<<dd<<"/"<<mm<<"/"<<yy<<endl;
	}
	
};
date::date()
{
	mm=yy=dd=0;
}
date::date(int d,int m,int y )
{
	dd=d;
	mm=m;
	yy=y;	
}

class student 
{
	int id;
	date d1;
	public:
	student();
	student(int ,int,int,int);
	void set(){
		cout<<"enter roll";
		cin>>id;
		d1.set();
	}
	void display(){
	cout<<" id= "<<id<<endl;
	cout<<"date: "; d1.display();
	}
};
student::student()
{
	id=0;
}
student::student(int idd,int d,int m,int y ): d1(d,m,y)
{
	id=idd;
}

int main()
{

	student arr[3];
	for (int i =0; i<3;i++)
	{
		arr[i].set();
	}

for (int i =0; i<3;i++)
	{
		arr[i].display();
	}
}
