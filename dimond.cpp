#include<iostream>
using namespace std;
int main()
{
    int n=4;
    for ( int i =0;i<n;i++)
    {
        for (int j= n; j>=i+1;j--)
        {
                cout<<" ";
        }
        
        for (int a=1;a<2*(i+1);a++)
        {
            cout<<"*";

        }
        cout<<endl;
    }
    
    for ( int i =0;i<n;i++)
    {
        for (int a=0;a<=i+1;a++)
        {
            cout<<" ";

        }
        for (int j= n; j>=i*2;j--)
        {
                cout<<"*";
        }
        
        
        cout<<endl;
    }
}