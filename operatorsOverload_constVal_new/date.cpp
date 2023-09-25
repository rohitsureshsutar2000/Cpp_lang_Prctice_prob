#include "date.h"
#include<iostream>
using namespace std;

date::date()
{
	dd=0;
	mm=0;
	yy=0;
	
}
date::date(int d,int m, int y ){
	dd=d;
	mm=m;
	yy=y;
}
date operator+(date& o,int y){
	o.dd=o.dd+y;
}
date operator-(date& b,int z){
	b.mm=b.mm-z;
}
void date::display(){
	cout<<" date - "<<dd<<" month - "<<mm<<" year - "<<yy<<endl;
}

