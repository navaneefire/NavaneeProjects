#include<iostream>
using namespace std;
int main()
{
int n;
int startnode;
int *startnodearray;
int *visitedarray;
int visitednodes=0;
int nextindex=-1;
cout<<"Enter the number of nodes\n";
cin>>n;
if(n<=0)
return 0;
int **array=new int*[n];
for(int i=0;i<n;i++)
{
array[i]=new int[n];
}
for(int i=0; i<n     ;i++)
{
for(int j=0;j<n;j++)
{
cin>>array[i][j];
}
}

cout<<"enter the start node\n";
cin>>startnode;
startnodearray=array[startnode-1];
visitedarray=new int[n];
visitedarray[startnode-1]=1;
startnode-=1;
while(visitednodes<n-1)
{
int min=32767;
if(visitednodes!=0)
{
for(int p=0;p<n;p++)
{
if(visitedarray[p]==0)
{
if(startnodearray[p]>array[startnode][nextindex]+array[nextindex][p])
{
startnodearray[p]=array[startnode][nextindex]+array[nextindex][p];
}
}
}
}
for(int j=0;j<n;j++)
{
if(visitedarray[j]==0)
{
if(min>startnodearray[j])
{
min=startnodearray[j];
nextindex=j;
}
}
}
visitedarray[nextindex]=1;
visitednodes++;
}
cout<<"minumum distance are\n\n\n\n";
for(int r=0;r<n;r++)
cout<<startnodearray[r]<<" ";
return 0;
}
