#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int p=40000;
	float rate=2.5f;
	int t=3;
	int n=2;
	double comp_inte;
	
	comp_inte=p*pow(1+(rate/100*n),n*t);
	cout<<"Compound Interest= "<<comp_inte;
	
}
