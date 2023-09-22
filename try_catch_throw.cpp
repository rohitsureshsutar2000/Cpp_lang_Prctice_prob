#include <iostream>
using namespace std;
float division (int value1,int value2)
{
	if(value2==0)
	{
		throw "attempted to divide by zero!";
	}
	return(value1/value2);
}
int main()
{

int i=25;
int j;
float k;
try
{
	cout<<"enter the value of j \n";
	cin>>j;
	k=division(i,j);
	cout<<k<<endl;
}
catch (const char* throwCatched)
{
	cout<<throwCatched<<endl;
}

}
