# include <bits/stdc++.h>
using namespace std;

int main()

{ 	int t;
	cin>>t;		
	while(t--) {
	    
	
			string str;
			int num = 0;
			cin>>str;
			for (int i = 0; i < str.size(); ++i)
			{
				if (str[i]=='4')
					num++;

			}
			cout<<num << endl;
		}
	
}