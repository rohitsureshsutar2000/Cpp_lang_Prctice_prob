#include "date_time.h"


#include<iostream>
using namespace std;

date_time::date_time()
{
	dd=0;
	mm=0;
	yy=0;
	
}
date_time::date_time(int d,int m, int y ){
	dd=d;
	mm=m;
	yy=y;
}
date_time operator+(date_time& o,int y){
	o.dd=o.dd+y;
}
date_time operator-(date_time& b,int z){
	b.mm=b.mm-z;
}
void date_time::display(){
	cout<<" date - "<<dd<<" month - "<<mm<<" year - "<<yy<<endl;
}
