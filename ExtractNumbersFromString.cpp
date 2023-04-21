#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;
int main()
{
   char str[100], num[100];
   int tot, i, j=0;
   cout<<"Enter the String: ";
   cin>>str;
   tot = strlen(str);
   for(i=0; i<tot; i++)
   {
      if(str[i]>='0' && str[i]<='9')
      {
         num[j] = str[i];
         j++;
      }
   }
   cout<<endl<<"Numbers extracted from the String:"<<endl;
   for(i=0; i<j; i++)
      cout<<num[i]<<" ";
   cout<<endl;
   return 0;
}




Input:
Enter the String: Welcome12345

Output:
Numbers extracted from the String:1 2 3 4 5
