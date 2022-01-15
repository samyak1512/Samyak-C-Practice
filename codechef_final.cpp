#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin>>t;
	while(t--) {
	    /* code */
	    int n,a;
	    cin>>n>>a;
	    if (n==1){
	    	if (a%2==0){
	    		cout<<"even"<<endl;
	    	}
	    	else if(a%2!=0){
	    		cout<<"odd"<<endl;
	    	}
	    }




	    else if (n%2==0 && a%2==0)
	    {
	    	/* code */
	    	cout<<"Impossible"<<endl;

	    }

	    else if (n%2!=0 && a%2==0){
	    	cout << "Impossible"<<endl;

	    }

	    else if ( n%2==0 && a%2!=0){
	    	cout<<"even"<<endl;
	    }

	    else if( n%2!=0 && a%2!=0){
	    	cout<<"odd"<<endl;
	    }

	    else{
	    	cout<<"Impossible"<<endl;
	    }
	}
}