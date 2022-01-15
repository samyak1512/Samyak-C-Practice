#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int p;
	int a= 1;
	p=pow(2,a);
	while((n/p)>2) {
	    /* code */
	    p=pow(2,a);
	    a++;
	}
	cout<<a-1z;
}