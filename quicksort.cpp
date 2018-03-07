#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
int temp;
temp=*a;
*a=*b;
*b=temp;
}
void quicksort(int *a,int low,int high)
{
if(low+1==high)
{
return ;
}
else
{
int i,j;
int pivot=a[low];
j=low+1;
i=high;
while(1)
  {
for(;a[j]<pivot&j<high+1;j++);
for(;a[i]>pivot&i>low;i--);
if(j<i)
{
swap(&a[j],&a[i]);
j++;
i--;
}
else
{
break;
}
 }
swap(a[i],a[low]);
quicksort(a,i+1,high);
quicksort(a,low,i-1);
}
}
int main()
{
int i,n;
int a[10]={100,90,80,70,60,50,40,30,20,10};
cout<<"enter the number of elements";
cin>>n;
for(i=0;i<n;i++)
{
cout<<a[i]<<" ";
}
quicksort(a,0,n-1);
for(i=0;i<n;i++)
{
cout<<a[i]<<" ";
}
return 0;
}
