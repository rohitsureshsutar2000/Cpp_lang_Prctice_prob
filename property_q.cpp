// 10 20 30 50 60 40 30 25 15

#include<iostream>
using namespace std;
int main()
{
	int b,max=0,prt=0;
	cout<<"enter how many elements ";
	cin>>b;
	cout<<endl;
	int a[b];
	for (int i=0;i<b;i++)
	{
		cin>>a[i];
	}
	max=a[0];
	for (int i=1;i<b;i++)
	{
		if (max<a[i])
		{
			max=a[i];
			prt=i;
		}
		else
		{
			break;
		}
	}
	cout<<"maximum price is "<<max<<endl<<"property no is "<<prt+1;
}
