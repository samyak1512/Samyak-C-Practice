// Time complexity is N*N*N

#include <iostream>
using namespace std;

void printsubarrays(int arr[],int n){
	for (int i = 0; i < n; ++i)
	{
		/* code */for (int j = i; j < n; ++j)
		{
			for (int k = i; k < j; ++k)
			{
				cout<<arr[k]<<",";
			}
			cout<<endl;
		}

	}
	
}


int main(){
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int n= sizeof(arr)/sizeof(int);
	printsubarrays(arr,n);
}