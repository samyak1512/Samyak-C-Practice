//  Arrays is a collection of the elements
// Same type
// Placed in contigous memory
// 4 bits


// Each integer take 4 bits
#include <iostream>
using namespace std;

int main(){
	int marks[100] = {0};
	// Inititalization with 0
	// All garbage data becomes 0
	int n;
	cout<<"no of students"<<endl;
	cin>>n;

	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin>>marks[i];
	}

	marks[0]= 89;

	for (int i = 0; i < n+50; ++i)
	{
		cout<<marks[i]<<endl;
	}
}