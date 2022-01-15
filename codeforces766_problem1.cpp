#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
	int n,m,r,c;
	cin>>n>>m>>r>>c;
	int a[n][m];
	for (int i = 0; i < n; ++i)
	{
		/* code */
		for (int j = 0; j < m; ++i)
		{
			/* code */
			cin>>a[i][j];
		}


	}
	if (a[r]=='B' || a[c]=='B')

	{
		/* code */
		cout<<1<<endl;

	}

	else if(a[r]=='B' && a[c]=='B')
		{cout<<0<<endl;}

	for (int i = 0; i < n; ++i)
	{
		/* code */for (int j = 0; j < m; ++i)
		{
			/* code */if (a[i]=='W' && a[j]=='W')
			{
				/* code */cout<<-1<<endl;
			}

			else{
		          cout<<2<<endl;
		      }
			}
		}
	}

	
}
	
