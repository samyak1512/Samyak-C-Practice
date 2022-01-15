#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin>>a[i];
	}
	int sum = 0;
	for (int i = 0; i < n; ++i)
	{
		/*de */
		sum = sum +a[i];
	}
	cout << sum;
}kokokoko