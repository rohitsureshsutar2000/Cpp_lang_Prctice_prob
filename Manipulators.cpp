#include <iostream> 
using namespace std;
#include <string.h>   
#include<iomanip>  
  
int main () {  
	int n = 1;

	cout.width(6);   
  	cout << right << n << '\n';  
  	
  	cout << setw(10) << "World";
  return 0;  
}  
