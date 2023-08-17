#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string s,t;
	    cin>>s>>t;
	    for(int i=0;i<5;i++){
	            if(s[i]==t[i]){
	                cout<<"G";
	            }else{
	                cout<<"B";
	            }
	        }cout<<"\n";
	    }
	return 0;
}
