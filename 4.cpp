#include<bits/stdc++.h>
using namespace std;

int main(){
	int a = 2;
	int b = 3;
	int c = 1;
	cout << (a<=b)<< endl;
	// && ||
	cout << ((b>a) && (b>c))<<endl;
	cout << ((b>a) || (b<c))<<endl;

	int n;
	cin>>n;
	if (n%2==0)
	{
		cout<<"YES";

	}
	else if (n%3==0)
	{
		cout<<"Divisible by 3";

	}
	else{
		cout<<"no" <<endl;
	}



	// Loops
	

	// int i=1;
	// while(i<10) {
	//     cout<<i<<endl;
	//     i++;
	
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		for (int j=1; j<=i; ++j){
			cout<<"*";
		}
		cout<<endl;
	}

}