# include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--) {
	    string str;
	    cin>>str;
	    for (int i = 0; i < str.size(); ++i)
	    {
	    	
	    	string my_str = str[(str.size()-i-1)];
	    	int a = my_str;
	    	cout<<a;
	    	
	    }
	    cout<<endl;
	}
}