#include<iostream>
using namespace std;
template <class t>
t swap1 ( t &a, t &b)
{
	int temp= a;
	a=b;
	b=temp;
	cout<<"swapping of two nnumbers  a = "<<a<<" b ="<<b<<endl;
}
int main()
{
	int a,b;
	cout<<"enter no a= ";
	cin>>a;
	cout<<"enter no b= ";
	cin>>b;
	swap1(a,b);
	int first=100, second=220;
	swap1(first,second);
	
}
