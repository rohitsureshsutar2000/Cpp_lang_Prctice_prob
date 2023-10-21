#include <iostream>
using namespace std;
void swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

int main()
{
	int a = 2, b = 5; // Initilize values 
	cout << "values of a and b before swapping: " << a<< " " << b << endl;
	swap(&a, &b); // pass address of a and b to swap function
	cout << "values of a and b after swapping: " << a << " "<< b << endl;
	return 0;
}

