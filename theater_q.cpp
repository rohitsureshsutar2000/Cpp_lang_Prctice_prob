// book two highest price tickets which contigeous 

// 10 	10	10	10	10
// 10	20	20	20	10
// 10	20	50	20	10
// 10	20	20	20	10
// 10	10	10	10	10

//    Theater screen

#include<iostream>
using namespace std;
int main()
{
	int r,c,max=0,prt=0,vi,vj;
	cout<<"enter how many row ";
	cin>>r;
	cout<<"enter how many column ";
	cin>>c;
	cout<<endl;
	int a[r][c];
	for (int i=0;i<r;i++)
	{
		for (int j=0;j<c;j++)
		{
			cin>>a[i][j];
		}
	}
	
	max=a[0][0];
	for (int i=0;i<r;i++)
	{
		for (int j=0;j<c;j++)
		{
			if (max<=a[i][j])
			{
				max=a[i][j];
				vi=i;
				vj=j;
				
			}
			
		}
	}
	if (a[vi][vj-1] < a[vi][vj+1])
	{
		cout<<"maximum no is "<<max<<endl<<"1st seat is "<<vi<<" "<<vj+1<<endl<<"2st seat is "<<vi<<" "<<vj;
	}
	else{
		cout<<"maximum no is "<<max<<endl<<"1st seat is "<<vi<<" "<<vj-1<<endl<<"2st seat is "<<vi<<" "<<vj;
	}
}
