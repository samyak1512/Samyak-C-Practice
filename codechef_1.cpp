#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--) {
	    /* code */
	    int a[2],b[2],c[2];
	    for (int i = 0; i < 2; ++i)
	    {
	    	/* code */
	    	cin >> a[i];


	    }
	    for (int i = 0; i < 2; ++i)
	    {
	    	/* code */
	    	cin >> b[i];


	    }
	    for (int i = 0; i < 2; ++i)
	    {
	    	/* code */
	    	cin >> c[i];



	    }
	    int asum, bsum, csum,z;
	    asum=a[0]+a[1];
	    bsum=b[0]+b[1];
	    csum=c[0]+c[1];
	    z= std::max(asum,bsum);
	    cout << std::max(z,csum)<<endl;


	}
}