#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
/*	static  int x=5;
if(x--){
		main();
		cout<<x<<" ";}
	return 0; */
int n;
		cout<<"Enter number of element\n";
		cin>>n;
				int a[n],b[n],m1=-1,m2=-1,i,flag=0;
	cout<<"Enter first array elements\n";
			for(i=0;i<n;i++){
					cin>>a[i];
				if(m1<a[i])
						m1=a[i];}
	cout<<"Enter second array elements\n";
			for(i=0;i<n;i++){
					cin>>b[i];
			if(m2<b[i])
					m2=b[i];
		}
			int hash[m1+1]={0};
	for(i=0;i<n;i++)
			hash[a[i]]++;
	for(i=0;i<n;i++)
			hash[b[i]]--;
for(i=0;i<m1+1;i++){
		if(hash[i]!=0){
			flag=1;break;
		}}
if(!flag)
		cout<<"Yes";
else
		cout<<"no";
return 0;			
}
