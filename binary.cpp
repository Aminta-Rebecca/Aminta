#include<bits/stdc++.h>
using namespace std;

bool isHeap(int a[], int n)
{
for(int i=0;i<=(n/2)/2;i++)
	{
	if(h[2*i+1]>h[i])
		return false;
	if(2*(i+2)<n && h[2*i+1]>a[i])
		return false;
	}
return true;
}
int main()
{
	int h[50],n;
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	cout<<"Enter the elements into the array"<<endl;
	for(int i=0;i<n;i++)
		cin>>h[i];
	if (isHeap(h,n)==true)
		cout<<"Yes it's a binary max heap"<<endl;
	else
		cout<<"No it is not a binary max heap"<<endl;
	return 0;
}
