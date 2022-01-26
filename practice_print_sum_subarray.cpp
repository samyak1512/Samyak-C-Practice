#include <iostream>
using namespace std;

void printsubarrays(int arr[],int n){
	for (int i = 0; i < n; ++i)
	{
		/* code */
		for (int j = i; j < n; ++j)
		{	int sum=0;			
			for (int k = i; k < j; ++k)
			{	
				sum=sum+arr[k];
				cout<<arr[k]<<",";
			}
			cout<<endl;
			cout<<sum<<endl;
		}

	}
	
}


int main(){
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int n= sizeof(arr)/sizeof(int);
	printsubarrays(arr,n);
}