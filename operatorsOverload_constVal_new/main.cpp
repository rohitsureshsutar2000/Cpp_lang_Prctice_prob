
#include <iostream>
#include "date.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	date d1(10,12,2023);
	d1+1;
	d1.display();
	d1-2;
	d1.display();
	return 0;
}

