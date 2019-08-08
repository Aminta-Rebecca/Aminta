#include<stdio.h>
int b_search(int a[],int n ,int k)
{
int l=0;
int h=n-1;
int mid;
while(l<=h)
{
mid=(l+h)/2;
if(k==a[mid])
return 1;
else{
if(k<a[mid])
h=mid-1;
else 
l= mid+1;
}
}
return-1;
}
void main()
{
int a[20],n, k;
printf("Enter the size of the sorted array");
scanf("%d",&n);
printf("Enter the array elements");
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the key element");
scanf("%d",&k);
int result=b_search(a,n,k);
printf("%d",result);
}

