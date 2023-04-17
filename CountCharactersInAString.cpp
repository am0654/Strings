#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    char str[100], ch;
    int i=0, freq=0;
    cout<<"Enter the String: ";
    gets(str);
    cout<<"Enter a Character to Find its Frequency: ";
    cin>>ch;
    while(str[i])
    {
        if(ch==str[i])
            freq++;
        i++;
    }
    cout<<"\nFrequency = "<<freq;
    cout<<endl;
    return 0;
}



Input:
Enter the String: Welcome to the party
Enter a Character to Find its Frequency: t


Output:
Frequency = 3
