#include<iostream>
using namespace std;
int swapFun(int &c,int &d)
{
	int temp;
	temp=c;
	c=d;
	d=temp;
}
int main()
{
	int a,b;
	cout<< " Enter numbers ";
	cin>>a>>b;
	cout<<"before swapping value of a "<<a<<" and b "<< b<< endl;
	swapFun(a,b);
	cout<<"after swapping value of a "<<a<<" and b "<< b;
}
