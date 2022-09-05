#include<iostream>
using namespace std;
int main()
{
    int l,b,h,volume;
    cout<<"Enter Length:";
    cin>>l;
    cout<<"Enter Width";
    cin>>b;
    cout<<"Enter Height";
    cin>>h;
    volume=(l*b*h);
    cout<<"Volume of cuboid:"<<volume;
    cout<<endl;
    return 0;
}