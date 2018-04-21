// hashing problem
#include<iostream>
#include<bits/stdc++.h>
using  namespace std; // incomplete with hashing 
int main()
{
	int n;
cin>>n;
	int a[n],i,s,j;
for(i=0;i<n;i++)
		cin>>a[i];
cin>>s;
sort(a,a+n);
int low=0,high=n-1;
while(low<high)
{
	if(a[low]+a[high]==s)
			{cout<<a[low]<<" "<<a[high];
			low++;high--;
			}
	else if(a[low]+a[high]>s)
				high--;
	else 
			low++;
}
return 0;
}
