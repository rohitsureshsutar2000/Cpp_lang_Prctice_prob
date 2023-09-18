#include<iostream>
using namespace std;
#include<string.h>
class strings
{
	int len;
	char* str;
	public:
		strings(char*);
		strings(strings &);
		~strings();
		void display();
};
strings::strings(char* sptr)
{
	this->len=strlen(sptr);
	this->str=new char(this->len+1);
	strcpy(this->str,sptr);
}
strings::strings(strings &c)
{
	this->len=c.len;
	this->str=new char[this->len+1];
	strcpy(this->str,c.str);
}
strings::~strings()
{
	cout<<"destructor is call"<<endl;
	if (str)
		delete[] str;
		str=NULL;
}


void strings::display()
{
	cout<<"this is len "<<this->len<<endl;
	cout<<"this is string "<<this->str<<endl;
}

int main()
{
	strings s1("Anas");
	s1.display();
	{
	strings s2(s1);
	s2.display();
	s2.~strings();
	}
	s1.display();
	return 0;
}
