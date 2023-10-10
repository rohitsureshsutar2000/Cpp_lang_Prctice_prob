// [1,5,7,1]
// 	sum=6 pair=2

#include<iostream>
using namespace std;

int main()
{
	int b,c=0 ,sum,count=1;
	int a[]={1,5,7,1};
	cin>>b;
	while(c!=4)
	{
		for (int i=c;i<4;i++)
		{
			if (i!=c)
			{
			 sum=a[c]+a[i];	
			 
			}
			if (sum == b)
			{
				count++;
				
			}
			
		}
		
		c++;
	}
	cout<<"pairs are :"<<count/2<<" ";

}
