#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char string[50],str[50];
    cout<<"Input your string:"<<endl;
    cin>>string;
    strcpy(str,string);
    cout<<"Copied string is:"<<str<<endl;
}