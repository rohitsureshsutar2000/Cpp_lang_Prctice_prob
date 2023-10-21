#include<iostream>
using namespace std;
int main()
{
	int a[5]={1,2,3,4,5};
	int* ptr[5];
	
	for (int i =0; i<5;i++)
	{
		ptr[i] = &a[i];
		
	}
	cout<<"Array of pointers"<<endl;
	for (int i =0; i<5;i++)
	{
		cout << *ptr[i]<< " At the memory location of array of pointers "<< ptr[i] <<endl;
		
	}
}
