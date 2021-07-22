#include <bits/stdc++.h>
using namespace std;
int fx(int a[],int n,int h, int l)
{
while(l<=h)
{int mid=(l+h)/2;
if(mid==a[mid])
return mid;
if(a[mid]>mid)
return fx(a,n,mid-1,l)
if(a[mid]<mid)
return fx(a,n,h,mid+1)
}
return -1;
}
int main()
{
int a[]={1,1,5,6,67,80};
int n=sizeof(a)/sizeof(a[1]);
cout<<fx(a,n,n-1,0);
return 0;
}
