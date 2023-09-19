#include<iostream>
#include<string.h>
using namespace std;

class string1
{
	int len;
	char* ptr;
	public:
		string1(char*);
		void show();
		string1(char*,int);
		string1(int);
		string1();
};
string1::string1(char* ch)
{
	this->len=strlen(ch);
	ptr= new char[this->len+1];
	strcpy(ptr,ch);
}
string1::string1(char* ch,int len)
{
	int i;
	this->len=len;
	ptr=new char[this->len+1];
	for( i=0;i<this->len;i++)
	{
		ptr[i]=*ch;
		cout<<ptr[i];
	}
	ptr[i]='\0';
	cout<<endl;
}
string1::string1(int len)
{
	this->len=len;
	ptr =new char[this->len+1];
	
	char ch[this->len+1];
	cout<<"enter string"<<endl;
	cin>>ch;
	strcpy(ptr,ch);
}

string1::string1()
{
	int i;
	cout<<"enter Length of string"<<endl;
	cin>>i;
	this->len=i;
	char ch[this->len+1];
	cout<<"enter the string"<<endl;
	ptr= new char[this->len+1];
	cin>>ch;
	strcpy(ptr,ch);
}




void string1:: show()
{
	cout<<"this is len "<<this->len<<endl;
	cout<<"this is string "<<this->ptr<<endl;
}

int main()
{
	string1 s1("cdac");
	s1.show();
	string1 s2("*",50);
	s1.show();
	string1 s3(5);
	s3.show();
	string1 s4;
	s4.show();
	
}
