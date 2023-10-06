#include<iostream>
using namespace std;
class Employee
{
	int emp_id;
	char name[15];
	int age;
	public :
		// get data from user
		void getData()
		{
			cout<<"Enter ID :"<<endl;
			cin>>emp_id;
			cout<<"Enter Name :"<<endl;
			cin>>name;
			cout<<"Enter Age :"<<endl;
			cin>>age;
		}
		// displaying the id , name and age
		void Display()
		{
			cout<<"Id : "<<emp_id<<endl;
			cout<<"Name : "<<name<<endl;
			cout<<"Age : "<<age<<endl;
		}
};

int main()
{
	//creating the object of array
	Employee array [3];
	for(int i=0; i<3; i++)
	{	
		array[i].getData();
	}
		for(int i=0; i<3; i++)
	{
		array[i].Display();
	}
	return 0;
}
