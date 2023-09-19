#include<iostream>
using namespace std;
#include<string.h>
class date
{
	int dd,mm,yy;
	public:
		date(int , int , int);
		
		void display();
};
date::date(int d,int m, int y)
{
	dd=d;
	mm=m;
	yy=y;

}




void date::display()
{
	cout<<"date:-  "<<dd<<"/"<<mm<<"/"<<yy<<endl;
	
}

int main()
{
	date d(8,8,20);
	d.display();
	date d1(d);
	
	
	d.display();
	return 0;
}
