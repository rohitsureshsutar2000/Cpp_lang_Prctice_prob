#include<iostream>
using namespace std;

class animal{
    public:
    animal(){
        cout<<"animal is called" <<endl;
    }
    void show(){
        cout<<"can be wild or pet animals"<<endl;
    }
};

class wild: virtual public animal{
    public:
    wild(){
        cout<<"wild is called"<<endl;
    }
    void show(){
        cout<<"tiger is from cat family"<<endl;
    }
};

class domestic:virtual public animal{
    public:
    domestic(){
        cout<<"domestic is called"<<endl;
    }
    void show(){
        cout<<"can be easily tamed"<<endl;
    }
};

class pet : public wild, domestic{
    public:
    pet(){
        cout<<"pet is called"<<endl;
    }
    void show(){
        cout<<"loyal"<<endl;
    }
};

int main(){
    pet p1;
    p1.show();
}