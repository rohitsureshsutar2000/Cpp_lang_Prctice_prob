#include <iostream>
using namespace std;
int main(int num, char* argv[]) {

     cout<<"you have entered"<<num<<"arguments:"<<"\n";
//
    for (int i = 0; i < num; ++i) {
      cout<<argv[i]<<"\n";
    }
    return 0;

}

