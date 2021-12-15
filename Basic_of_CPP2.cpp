#include <iostream>
using namespace std;
double product(double,double);
int main()
{
    double a,b;
    cout<<"Enter two numbers :\n";
    cin>>a;
    cin>>b;
    product(a,b);
    return 0;
}
double product(double a,double b)
{
    double p=a*b;
    cout<<"Product = "<<p;
}
