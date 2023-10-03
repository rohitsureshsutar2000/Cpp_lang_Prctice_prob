#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> v;
    int a,ab,sum=0,res;
    cout<<"enter element";
    cin>>a;
    for (int i=0;i<a;i++)
    {
        cin>>ab;
        v.push_back(ab);
    }
    
    for (int i=0;i<a;i++)
    {
        res=v[i];
        sum=sum*10+res;
    }
    sum=sum+1;
    for (int i=0;i<a;i++)
    {
        v.pop_back();
    }
    res=sum;
    for (int i=0;i<a;i++)
    {
        res=sum%10;
        v.insert(v.begin(),res);
        sum=sum/10;
    }
    for (int i=0;i<a;i++)
    {
        cout<<v[i];
    }  


}