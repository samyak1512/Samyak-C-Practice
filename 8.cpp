# include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	int n;
	
	cin>>t;
	while(t--) {
	int fac =1;
	  cin>>n;
	  for (int i = 1; i <= n; ++i)
	  {
	    fac= i*fac;
        
	  }

cout<<fac<<endl;
	}
}