//			1	0	1	1
//			0	1	0	1
//			1	0	0	0
//			0	0	1	0



#include<iostream>
using namespace std;
int main()
{
	int max1=0,max2=0,floor=0;
	int a[4][4]={1,0,0,1,
				 1,1,0,1,
				 1,0,0,0,
				 0,0,1,0};
	
	
	for(int i=0;i<4;i++)
	{
//		cout<<"When floor is ="<<i<<endl;
		max2=0;
		for (int j=0;j<4;j++)
		{
			if (a[i][j]==1)
			{
				max2++;
				j++;
			}
			
		}
		if (max1<=max2)
		{
			max1=max2;
			floor=i;
//			cout<< "            The max value ="<< max1<<endl;
		}
		else
		{
			max1=max1;
		}
	}
	
	cout<<"theif can steal cars from floor "<<floor<<endl;
	cout<<"maximum cars can steal ="<<max1<<endl;
}
