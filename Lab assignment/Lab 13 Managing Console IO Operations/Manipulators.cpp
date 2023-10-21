#include <iostream> 
using namespace std;
#include <string.h>   
#include<iomanip>  
  
int main () {  
	int n = 1;

	cout.width(6);   
  	cout << right << n << '\n';  
  	
  	cout << setw(10) << "World"<<endl<<endl ;
  	
    float PI = 3.14;
    cout << setprecision(10) << PI << endl;
  return 0;  
}  
