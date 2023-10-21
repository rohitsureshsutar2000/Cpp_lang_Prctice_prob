#include<iostream>
using namespace std;
class Employee{
	int emp_id;
	int mob_num;
	public:
		void display1(){
			cout<<"outer class is called"<<endl;
		}
		public:
		class innerfun{
			int sal;
			public:
				
				void display(){

					cout<<"inner class is called"<<endl;
				}
			
		};
};



int main(){
	Employee e1;
	e1.display1();

	Employee::innerfun s1;
	s1.display();


	
}
