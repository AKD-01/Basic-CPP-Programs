#include<iostream>
#include<process.h>
using namespace std;
int main()
{
    float a, b, h;
    int n;
    cout<<"FOR AREA OF TRIANGLE ..PRESS - 1 \n";
    cout<<"FOR AREA OF CIRCLE ..PRESS - 2 \n";
    cout<<"TO EXIT PRESS ANY OTHER KEY \n";
    cin>>n;
    switch(n)
    {
        case 1: cout<<"ENTER THE HEIGHT AND BASE OF TRIANGLE \n";
        cin>>h>>b;
        a=(b*h)/2;
        cout<<"AREA OF TRIANGLE : "<<a;
        break;

        case 2: cout<<"ENTER THE RADIUS OF CIRCLE \n";
        cin>>b;
        a=3.14*b*b;
        cout<<"AREA OF CIRCLE : "<<a;
        break;

        default: exit(0);
    }
    return 0;
}