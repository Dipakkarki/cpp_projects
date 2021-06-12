#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s1[50],s2[50];
    int value;
    cout<<"Input your string:"<<endl;
    cin>>s1>>s2;
    value= strcmp(s1,s2);
    if (value<0)
    {
        cout<<"First string is forward than second"<<endl;
    }
    else if(value>0)
    {
        cout<<"First string is behind than second"<<endl;
    }
    else
    {
        cout<<"They are equal."<<endl;
    }    
    
}