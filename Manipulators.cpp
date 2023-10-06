#include <iostream> 
using namespace std;
#include <string.h>   
#include<iomanip>  
  
int main () {  
	int n = 1;
	// using  manipulators
	cout.width(6);   
  	cout << right << n << '\n';  
  	// we use setw manipulator
  	cout << setw(10) << "World";
  return 0;  
}  
