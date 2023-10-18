//	86 16 16 53 19 0 0 0 0 0 0
// find pairs of 0 


#include<iostream>
using namespace std;

int main()
{
	int a[11],count=0;
	for (int i=0;i<11;i++)
	{
		cin>>a[i];
		
		
	}
	
	for (int i=0;i<11;i++)
	{
		if (a[i]==0)
		{
			for (int j=i;j<11;j++)
			{
				if (a[i]==0 && a[j]==0)
				{
					count++;
				}
			}
		}
		
	}
	cout<<"pairs are :"<<count;	
}
