#include<iostream>
using namespace std;
void sort(int *,int ,int ,int);
void partition(int *a,int low,int high)
{
if(low==high)
{
return ;
}
else
{
int mid=(low+high)/2;
partition(a,low,mid);
partition(a,mid+1,high);
sort(a,low,mid,high);
}
}
void sort(int *a,int low,int mid,int high)
{
int *array=new int[high-low+1];
int k=0;
int i=low;
int j=mid+1;
while(i<=mid&&j<=high)
{
if(a[i]<a[j])
{
array[k]=a[i];
i++;
k++;
}
else
{
array[k]=a[j];
j++;
k++;
}
}
while(i<mid+1)
{
array[k]=a[i];
k++;
i++;
}
while(j<high+1)
{
array[k]=a[j];
j++;
k++;
}
for(k=low;k<=high;k++)
{
a[k]=array[k-low];
}
}
int main()
{
int n;
cout<<"enter the number of elements";
cin>>n;
int *a=new int[n];
for(int i=0;i<=n-1;i++)
{
cin>>a[i];
}
partition(a,0,n-1);
for(int i=0;i<=n-1;i++)
{
cout<<a[i]<<" ";
}
return 0;
}
