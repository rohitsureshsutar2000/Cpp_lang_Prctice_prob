#include<iostream>
using namespace std;

void display(char='*', int =3);
int main(){
	cout<<"no argument passed"<<endl;
	display();
	cout<<"1 argument passed"<<endl;
	display('*',10);
	cout<<"2 argument passed"<<endl;
	display('/',5);
	cout<<"3 argument passed"<<endl;
	display('-');
}

void display(char c, int a){
	for(int i=0; i<a;i++){
		cout<<c;
	}
	cout<<endl;
}
