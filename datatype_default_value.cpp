#include<iostream>
#include<string.h>
using namespace std;
void symb(){
	char a='_';
	for(int i = 0;i<20;i++){
		cout<<a;
	}
}
int main(){
	cout<<"Datatype"<<"\t"<<"size"<<endl;
	symb();
	cout<<endl;
	cout<<"int"<<"\t\t "<<sizeof(int)<<endl;
	symb();
	cout<<endl;
	cout<<"float"<<"\t\t "<<sizeof(float)<<endl;
	symb();
	cout<<endl;
	cout<<"double"<<"\t\t "<<sizeof(double)<<endl;
	symb();
	cout<<endl;
	cout<<"char"<<"\t\t "<<sizeof(char)<<endl;
	symb();
	cout<<endl;
	return 0;
}
