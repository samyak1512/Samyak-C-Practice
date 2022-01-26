// Time complexity is N


#include <iostream>
using namespace std;

void reversearray(int arr[], int n){
	int s=0;
	int e=n-1;

	while(s<=e) {
	    /* code */
	    swap(arr[s],arr[e]);
	    s++;
	    e--;

	}
}



int main(){
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int n= sizeof(arr)/sizeof(int);
	reversearray(arr,n);

	for (int i = 0; i < n; ++i)
	{
		/* code */
		cout<<arr[i]<<endl;
	}
}