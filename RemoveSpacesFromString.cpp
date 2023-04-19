#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    char str[200];
    int i=0, j, chk;
    cout<<"Enter the String: ";
    cin>>str;
    while(str[i]!='\0')
    {
        chk=0;
        if(str[i]==' ')
        {
            for(j=i; str[j-1]!='\0'; j++)
                str[j] = str[j+1];
            chk = 1;
        }
        if(chk==0)
            i++;
    }
    cout<<"\nString without Spaces: "<<str;
    cout<<endl;
    return 0;
}


Input:
Enter the String: Have a good day!
  
Output:
String without Spaces: Haveagoodday!
