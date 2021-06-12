#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char string[50],str[50];
    cout<<"Input your first and second strings:"<<endl;
    cin>>string>>str;
    strcat(string,str);
    cout<<"The string is:"<<string<<endl;
}