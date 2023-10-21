#include <iostream>
using namespace std;
template <typename T>
T area(T a, T b){
    T result = a * b;
    return result;
}
int main()
{
    int x = area<int>(4, 8);
    double y = area<double>(3.3, 1.5);
    float z = area<float>(2.3f, 1.2f);
    
    cout << "x: " << x << " y: " << y << " z: " << z;
    
    return 0;
}
