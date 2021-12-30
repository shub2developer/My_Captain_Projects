#include <iostream>
using namespace std;
int check(int);
int main()
{
    int age;
    cout<<"WELCOME TO ADULTHOOD"<<endl;
    cout<<"Please enter your age"<<endl;
    cin>>age;
    check(age);
    return 0;
}
int check(int a)
{
    if(a>=18)
    {
        cout<<"Yes,you can vote:)";
    }
    else
    {
        cout<<"Sorry:(, you cannot vote";
    }
}
