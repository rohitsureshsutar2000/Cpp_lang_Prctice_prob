#include<iostream>
using namespace std;

int main()
{
	int power,n, result=1;
	cout<<"Enter Number ";
	cin>>n;
	cout<<"Enter Power ";
	cin>>power;
	for (int i=0;i<power;i++)
	{
		result=result*n;
	}
	cout<<"Answer:-"<<result;
}
