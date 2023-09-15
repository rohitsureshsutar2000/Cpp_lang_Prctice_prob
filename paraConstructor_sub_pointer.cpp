#include<iostream>
#include<string.h>
using namespace std;
class employ{
	int id;
	char name[50];
	public:
		employ(char[] , int);
		void display()
		{
			cout<<"Name of employee:- "<<name<<endl<<"Employee ID:- "<<id<<endl;
		}
};
employ :: employ(char* a, int i)
{
		strcpy(name,a);
		id=i;		
}


int main()
{
	employ s1("ravi",500);
	s1.display();
}
