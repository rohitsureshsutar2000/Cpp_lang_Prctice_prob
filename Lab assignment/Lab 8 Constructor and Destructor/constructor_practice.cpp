#include<iostream>
using namespace std;

class date{
	int dd,mm,yy;
	public:
		void show();
		date(int,int,int);
		~date();
};
date::date(int d,int m,int y){
	cout<<"constructor is called"<<endl;
	dd=d;
	mm=m;
	yy=y;
}
date::~date(){
	cout<<"destructor is called"<<endl;

}

void date::show(){
	cout<<"date is "<<dd<<"/"<<mm<<"/"<<yy<<endl;
}
int main()
{
	date d1(20,9,2023);
    d1.show();
//    date d2(d1);
//    d2.show();
	
	
	
	return 0;
}
