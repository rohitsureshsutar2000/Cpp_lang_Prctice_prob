#include "time.h"
#include<iostream>
using namespace std;
time::time( )
{
	hh=0;
	mm=0;
	ss=0;
}
time::time( int h,int m, int s)
{
	hh=h;
	mm=m;
	ss=s;
}

time operator+(time& o,int y){
	o.hh=o.hh+y;
}
time operator-(time& b,int z){
	b.mm=b.mm-z;
}
void time::display(){
	cout<<"time :- "<<hh<<" : "<<mm<<" :"<<ss<<endl;
}
