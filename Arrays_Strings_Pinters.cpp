#include <iostream>
using namespace std;
int main()
{
    int i,num[5];
    cout<<"Enter elements :";
    for(i=0;i<=4;i++)
    {
        cin>>num[i];
    }
    cout<<"You entered :";
    for(i=0;i<=4;i++)
        cout<<*(num+i);
}
