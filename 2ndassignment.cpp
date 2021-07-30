#include <iostream>
using namespace std;
void duplicate(int A[],int n)
{
	int last_duplicate = 0;
	int i;
	for(i=0;i<n;i++)
	{
		if(A[i]==A[i+1] && last_duplicate!=A[i])
		{
			cout<<" The duplicate number is "<< A[i]<<endl;
			last_duplicate = A[i];
		}
	}
}
int main()
{
	int j,n,arr[n];
	cout<<"Enter the size of array"<<endl;
	cin>>n;
	cout<<"Enter the array elements "<<endl;
	for(int j=0;j<n;j++)
	{
		cin>>arr[j];
	}
	duplicate(arr,n);
	return 0;
}