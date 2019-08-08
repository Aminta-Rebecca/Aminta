#include<stdio.h>
int max(int a[],int n)
{
int max=a[0];
for(int i=0;i<n;i++)
{
if(a[i]>max)
max=a[i];
}
return max;
}

void main()
{
int a[10],n,j;
printf("Enter the size of the array");
scanf("%d",&n);
printf("Enter the elements of the array");
for(j=0;j<n;j++)
{
scanf("%d",&a[j]);
}
int result=max(a,n);
printf("max element is %d",result);
}

