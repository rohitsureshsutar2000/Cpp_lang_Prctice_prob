#include<iostream>
using namespace std;
class thisPo
{
	int a,b;
	public:
		void getValue(int a,int b)
		{
			this->a=a;
			(*this).b=b;
		}
		void display()
		{
			cout<<"value of a:- "<<a << " & b:- "<<b<<endl;
		}
};

int main()
{
	thisPo c1;
	c1.getValue(10,20);
	c1.display();
}
