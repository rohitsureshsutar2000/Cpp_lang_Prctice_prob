#include<iostream>
using namespace std;
class Printer1{
	int i=10;
	public:
		void display1(){
			cout<<"printer1 is called"<<endl;
		}
	friend void fun();
};
class Printer2{
	public:
		void display2(){
			
			cout<<"printer2 is called"<<endl;
		}	
		friend void fun();
		
	
};
class Computer:public Printer1,Printer2{
	public:
		void display3(){
			Printer1::display1();
			Printer2::display2();
			cout<<"computer class is called"<<endl;
		}
	

};

void fun(int i){
	cout<<"friend function is called"<<endl;
	cout<<"Private data can access through Friend function i = "<<i<<endl;

}


int main(){
	fun(10);
	Computer c1;
	c1.display3();
	
}
