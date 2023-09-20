#include<iostream>
using namespace std;

class complex
{
	int real,img;
	public: static int cnt;
	public:
		complex()
		{
			cout<<"default is invoked"<<endl;
			real=5;
			img=5;
			cnt++;
		}
		complex(int real,int img)
		{
			cout<<"parametrized is invoked"<<endl;
			this->real=real;
			this->img=img;
			cnt++;
		}
		static int getcnt()
		{
			return cnt;
		}
};
int complex::cnt=0;

int main(){
	complex c1;
	complex c2(10,10);
	cout<<"Number of object created is "<<complex::getcnt()<< "   " <<complex::cnt<<endl;
	cout<<"size of object is "<<sizeof(c1)<<endl;
	
}
