#include<iostream>
using namespace std;

class bank{
    int amount, withdraw;
    public:
        bank(int amount, int withdraw){
                try
                {
                    this->amount = amount;
                    this->withdraw = withdraw;
                    if(amount>= withdraw){
                    this->amount -= withdraw;
                }else{
                    throw "invalid";
                }
                }
                catch(const char* e)
                {
                    cout<<"invalid transiction"<<endl;
                    cout<< e<<endl;
                }
            }
            void show(){
                cout<<"amount  = "<<this->amount<<endl;
            }
            
        };

int main(){
    int a,b;
    cout<<"enter amount and withdraw : "<<endl;
    cin>>a>>b;
    bank b1(a,b);
    b1.show();
}