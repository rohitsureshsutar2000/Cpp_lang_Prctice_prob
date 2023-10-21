#include<iostream>
using namespace std;
int main()
{
	int a=10,b=5;
	cout<<"Arithmatic Operators : "<<endl;
	cout<<"Addition:       a+b= "<<a+b<<endl;
	cout<<"Substraction:   a-b= "<<a-b<<endl;
	cout<<"Multiplication: a*b= "<<a*b<<endl;
	cout<<"Division:       a+b= "<<a/b<<endl<<endl;


	cout<<"Unary Operators : "<<endl;
	cout<<"Increament: value of a = "<<a<<endl;
	cout<<"after increament a= "<<++a <<endl;
	cout<<"decrement: value of a = "<<b<<endl;
	cout<<"after decreament a= "<<++b <<endl<<endl;
	
	
	
	cout<<"Relation Operators : "<<endl;
	if ((a<b)? cout<<"(a<b a is greater )":cout<<("a<b: b is samller"));
	cout<<endl;
	if ((a>b)? cout<<"(a>b a is greater )":cout<<("a>b: b is samller"));
	cout<<endl;
	if ((a>=b)? cout<<"(a>=b a is greater or equal )":cout<<("a>=b: b is samller or equal"));
	cout<<endl;
	if ((a<=b)? cout<<"(a<=b a is smaller or equal )":cout<<("a<=b: b is greated or equal"));
	cout<<endl<<endl;
	
	
	cout<<"logical Operators : "<<endl;
	int x=0,y=1;
	cout<<"using And operator value of x=0,y=1: x && y:- "<<(x&&y)<<endl;
	cout<<"using And operator value of x=0,y=1: x || y:- "<<(x||y)<<endl<<endl;
	
	cout<<"Bitwise Operators : "<<endl;
	x=0,y=8;
	cout<<"using And operator value of x=0,y=1: x & y:- "<<(x&y)<<endl;
	cout<<"using And operator value of x=0,y=1: x | y:- "<<(x|y)<<endl;
	cout<<"using And operator value of y=8: 1 << y:- "<<(1<<y)<<endl;
	cout<<"using And operator value of y=8: 1 >> y:- "<<(1>>y)<<endl<<endl;
	
	cout<<"assignment Operators : "<<endl;
	x=0,y=8;
	cout<<"using And operator value of x=0,y=8: x = y = "<<(x=y)<<endl<<endl;
	
	cout<<"Ternary Operators : "<<endl;
	y=true;
	if ((y==true) ? (cout<<"Using Ternary operator "):(cout<<"false "));
	
}
