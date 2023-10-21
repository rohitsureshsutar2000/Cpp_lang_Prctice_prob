#include<iostream>
using namespace std;
int ref(int&);
int main()
{	
	int a=10;
	
	cout<< "before changing value through reference "<<a<<endl;
	ref(a);
	cout<< "after changing value through reference "<<a<<endl;
}
int ref(int & new_a)
{
	 
	new_a=20;
	
	
}

