#include<iostream>
using namespace std;
template <class t>
t sum ( t a, t b)
{
	cout<<"addition of two no a+b = "<<a+b<<endl;
}
int main()
{
	int a,b;
	cout<<"enter no a= ";
	cin>>a;
	cout<<"enter no b= ";
	cin>>b;
	sum(a,b);
}
