#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter a Number for a:";
    cin>>a;
    cout<<"Enter aNumber for b:";
    cin>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"After swap "<<"a= "<<a<<" b= "<<b;
    cout<<endl;
    return 0;

}