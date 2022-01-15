#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--) {
	    int a;
	    int b;
	    cin>>a;
	    cin>>b;
	    if (a>b){
	    	cout<<">"<<endl;
	    }
	    else if (a<b){
	    	cout<<"<"<<endl;

	    }
	    else{
	    	cout<<"="<<endl;
	    }
	}
}