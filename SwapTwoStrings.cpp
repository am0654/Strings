#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char strOne[50], strTwo[50], strTmp[50];
    cout<<"Enter the First String: ";
    cin>>strOne;
    cout<<"Enter the Second String: ";
    cin>>strTwo;
    cout<<"\nString before Swap:\n";
    cout<<"First String = "<<strOne<<"\tSecond String = "<<strTwo;
    strcpy(strTmp, strOne);
    strcpy(strOne, strTwo);
    strcpy(strTwo, strTmp);
    cout<<"\n\nString after Swap:\n";
    cout<<"First String = "<<strOne<<"\tSecond String = "<<strTwo;
    cout<<endl;
    return 0;
}



Input:
Enter the First String: hello
Enter the Second String: All

Output:
String before Swap:
First String = hello    Second String = All

String after Swap:
First String = All      Second String = hello
