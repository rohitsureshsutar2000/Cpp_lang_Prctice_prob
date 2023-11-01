#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"enter no";
	cin>>a;
	int b=1;
	for (int i=1;i<=(a+1)/2;i++)
	{
		for (int j=a/2;j>=i;j--)
		{
			cout<<"-";
		}
		for (int k=0;k<b;k++)
		{
		
			cout<<"*";
		}
		b=b+2;		
		cout<<endl;
	}
	b=a-2;
	for (int i=1;i<(a+1)/2;i++)
	{
		for(int j=0;j<i;j++)
		{
			cout<<"-";
		}
		for (int k=0;k<b;k++)
		{
			cout<<"*";
		}
		b=b-2;
		cout<<endl;
	}
	
}
