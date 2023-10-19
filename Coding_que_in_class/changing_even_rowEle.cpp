//	123	=>	321
//	456	=>	456
//	789	=>	789



#include<iostream>
using namespace std;
int main()
{
	int temp;
	int a[3][3]={1,2,3,4,5,6,7,8,9};
	for (int i =0;i<3;i++)
	{
		if (i%2==0){
			for (int j=0;j<3;j++)
			{
				temp=a[i][j];
				a[i][j]=a[i][j+2];
				a[i][j+2]=temp;
				
				break;
			}
		}
	
	}
	for (int i =0;i<3;i++)
	{
			for (int j=0;j<3;j++)
			{
				cout<<a[i][j];
			}
			cout<<endl;
		}
	
}
