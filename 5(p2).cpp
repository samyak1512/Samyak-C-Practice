# include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--) {
	   int n,b;
	   cin>>n;
	    int a=(n%10);
	   while(n>10) {
	      b= n%10;
	      n=n/10;

	   }
	   cout<<a+b << endl;
	   }
	}
