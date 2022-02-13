#include<iostream>
using namespace std;
int main()
{
    int a,b,c,n;
    a=0;
    b=1;
    cout<<"How many values : \n";
    cin>>n;
    cout<<"FIBONACCI SERIES : "<<a<<" "<<b;
    for(int i=2; i<n; i++)
    {
        c=a+b;
        cout<<" "<<c;
        a=b;
        b=c;
    }
    return 0;
}