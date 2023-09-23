#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#include "date_time.h"
#include "time.h"
int main(int argc, char** argv) {
	date_time d1(10,12,2023);
	d1+1;
	d1.display();
	d1-2;
	d1.display();
	cout<<endl;
	cout<<"====================="<<endl;
	cout<<"time"<<endl;
	cout<<"====================="<<endl;
	time t1(10,20,60);
	t1+1;
	t1.display();
	
	return 0;
	
}
