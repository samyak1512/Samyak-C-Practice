#include <bits/stdc++.h>
using namespace std;

int main(){
	int X;
	 double  Y;
	 double  bal;
	cin>>X;
	cin>>Y;
	if ((Y>X+0.5) && (X%5==0) )
	{
	 bal = Y-(X+0.5);
	 cout<<bal;	
	}

	else {
		cout<<Y;
	}
}