#include<iostream>
using namespace std;

int main(){
    int a=371,rem,result=0;
    int copy=a;
    while(a>0)
    {
        rem=a%10;

        a=a/10;

        result=result+rem*rem*rem;
        
    }
    cout<<result;
}