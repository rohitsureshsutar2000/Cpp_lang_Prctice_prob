//----*1*----
//---**2**---
//--***3***--
//-****4****-
//*****5*****

#include<iostream>
using namespace std;

int main()
{
	int a,b;
	cin>>a;
	b=a;
	for (int i=1;i<=a;i++)
	{
		// adding space
		for (int j=0;j<b-1;j++)
		{
			cout<<" ";
		}
		//printing * tringle
		for (int x=0;x<i;x++)
		{
			cout<<"*";
			
		}
		// printing numbers
		cout<<i;
		for (int x=0;x<i;x++)
		{
			cout<<"*";
		} 
		b--;
		cout<<endl;
	}
}
