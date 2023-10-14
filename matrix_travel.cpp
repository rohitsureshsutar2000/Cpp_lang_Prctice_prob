#include<iostream>
using namespace std;
int main()
{
	int arr[3][3]={5,11,6,7,8,12,9,13,17};
	for (int i=0;i<3;i++)
	{
		for (int j=0;j<3;j++)
		{
			cout<<arr[i][j]<<"  ";
		}
		cout<<endl;
	}
	cout<<endl<<endl;
	cout<<"After traversing the matrix is "<<endl<<endl;
	for (int i=0;i<3;i++)
	{
		if (i%2==0)
		{
			for (int j=0;j<3;j++)
			{
				cout<<arr[i][j]<<"  ";
			}
		}
		else
		{
			for (int k=2;k>=0;k--)
			{
				cout<<arr[i][k]<<"  ";
			}
		}
		cout<<endl;
	}
	
	
}
