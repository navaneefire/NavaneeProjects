#include<iostream>
using namespace std;
int main()
{
int sum,k,j,i,n;
cout<<"enter the number of vertices\n";
cin>>n;
long **a=new long*[n];
for(i=0;i<n;i++)
{
a[i]=new long[n];
}
for(i=0;i<n;i++)
{
for(j=0;j<=n-1;j++)
cin>>a[i][j];
}
for(k=0;k<n;k++)
{
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
sum=a[i][k]+a[k][j];
if(sum<a[i][j])
a[i][j]=sum;
}
}
}
for(i=0;i<n;i++)
{
for(j=0;j<=n-1;j++)
cout<<a[i][j]<<" ";
cout<<"\n";
}
return 0;
}
