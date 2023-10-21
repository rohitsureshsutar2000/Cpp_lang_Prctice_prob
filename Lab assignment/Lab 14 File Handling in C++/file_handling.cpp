#include <iostream>
#include <fstream>

using namespace std;
int main()
{
	ofstream File("testFile.txt");
	File << "writtig in File and it is fun enough!!!";
	File.close();
}
