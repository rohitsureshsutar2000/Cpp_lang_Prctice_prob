#include<iostream>
using namespace std;

int main()
{
	int firstNo,secondNo;
	cout<<"Enter Two number:-"<<endl;
	cin>>firstNo>>secondNo;
	
	//swap two no
	int temp=firstNo;
	firstNo=secondNo;
	secondNo=temp;
	cout<<"After swapping Two number are:-"<<endl<<firstNo<<endl<<secondNo;
}
