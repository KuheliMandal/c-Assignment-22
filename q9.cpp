#include<iostream>
using namespace std;
int main()
{
    int p,q;
    cout<<"Enter a Number for p:";
    cin>>p;
    cout<<"Enter a Number for q:";
    cin>>q;
    
    if(p>q)
    {
        cout<< p<<"  p is greater than q "<<q;

    }
   if(q>p)
   {
        cout<<q<< " q is greather than p "<<p;

    }
    if(q=p){
    cout<<"both are same";
    }    
    cout<<endl;
    return 0;

}