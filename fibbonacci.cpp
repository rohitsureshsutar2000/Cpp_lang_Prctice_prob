#include<iostream>
using namespace std;
int main()
{
    int n=20,t1=0,t2=1,result=0;
    cout<<t1<<" "<<t2<<" ";
    result=t1+t2;
    while(result<=n){
        cout<<result<<" ";
        t1=t2;
        t2=result;
        result=t1+t2;
    }
}