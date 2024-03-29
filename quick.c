#include <stdio.h>
 
void quick_sort(int[],int,int);
int partition(int[],int,int);
 
int main()
{
int a[50],n,i;
printf("How many elements?");
scanf("%d",&n);
printf("Enter the array elements:");

for(i=0;i<n;i++)
scanf("%d",&a[i]);

quick_sort(a,0,n-1);
printf("\nArray after sorting:");

for(i=0;i<n;i++)
printf("%d ",a[i]);

return 0;	
}
 
void quick_sort(int a[],int l,int h)
{
int j;
if(l<h)
{
j=partition(a,l,h);
quick_sort(a,l,j-1);
quick_sort(a,j+1,h);
}
}
 
int partition(int a[],int l,int h)
{
int v,i,j,temp;
v=a[l];
i=l;
j=h+1;

do
{
do
i++;

while(a[i]<v&&i<=h);

do
j--;
while(v<a[j]);

if(i<j)
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}while(i<j);

a[l]=a[j];
a[j]=v;

return(j);
}
