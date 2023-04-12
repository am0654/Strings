#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    char str[200];
    int len=0, i=0;
    cout<<"Enter the String: ";
    cin>>str;
    while(str[i])
    {
        len++;
        i++;
    }
    cout<<"\nLength = "<<len;
    cout<<endl;
    return 0;
}

Input:
Enter the String: Welcome

Output:
Length = 5
