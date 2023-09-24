#include<iostream>
using namespace std;
void swap(int&,int&);
int main()
{
	int a,b;
	cout<<"Enter Values a and b "<<endl;
	cin>>a>>b;
	cout<<"Before swapping values of a = "<<a<<" and b = "<<b<<endl;
	swap(a,b);
	cout<<"After swapping values of a = "<<a<<" and b = "<<b;
	return 0;
}
void swap(int& p, int& q)
{
	int temp;
	temp=p;
	p=q;
	q=temp;
}
