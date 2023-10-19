//	horses betting amount		10	20	50	40	30
//	addition of continuous squence of horses <100

#include<iostream>
using namespace std;
int main()
{	//{40,10,30,50,20}
	//{10,90,80,20,90,60,40,65,78,75}
//	{30,40,50,20,20,10,90,10,10,10}
	int a[10]={10,90,80,20,90,60,40,65,78,75};
	int max1=0,max2=0,count2;
	int sum=0,count=0;
	for (int j=0;j<10;j++)
	{
		
		for (int i=j;i<10;i++)
		{
			if (sum+a[i] <100)
			{
				sum=sum+a[i];
				count++;
			}
			else 
			{
				break;
			}	
		}
		max2=100-sum;
		if (max1>max2)
		{
			count2=count;
		}
		else 
		{
			count=count;
		}
		
		

//		
		
		cout<<"count : "<<count2<<"  sum: " <<sum<<endl;
		count=0;
		sum=0;

		
	}
	
}
