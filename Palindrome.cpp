#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char a[10],b[10];
    cout<<"ENTER A STRING TO CHECK IF IT IS A PALINDROME OR NOT \n";
    cin>>a;
    strcpy(b,a);
    strrev(b);
    if(strcmp(a,b)==0)
    cout<<"ENTERED STRING IS PALINDROME.";
    else
    cout<<"ENTERED STRING IS NOT A PALINDROME.";
    return 0;
}