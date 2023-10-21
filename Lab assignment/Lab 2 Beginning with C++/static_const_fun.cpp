#include<iostream>
using namespace std;
class Complex
{
	int real,img;
	public:
		static const int cnt;
		private:
			static const int cnt1;
			public:
				Complex()
				{
					cout<<"Default is invoked\n ";
					real=5;
					img=5;
				}
				// static function
				static int getcnt()
				{
					cout<<" No of object is created: "<<cnt1;
				}
				//constant function
				int show() const
				{
					cout<<"this is constant function"<<endl;
				}
};
const int Complex::cnt=5;
const int Complex::cnt1=10;
int main()
{
	Complex c1;
	c1.show();
	cout<<Complex::getcnt()<<endl;
	cout<<"Size of object "<<sizeof(c1)<<endl;
	cout<<Complex::cnt;
	
}
