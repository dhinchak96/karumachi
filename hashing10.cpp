//hashing problem 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;	
	cin>>n;
		int a[n],i,num,hash[101]={0};
	while(n--)
	{
		cin>>num;
	hash[num]++;
	}
for(i=0;i<101;i++)
		if(hash[i]==3){
				cout<<i;break;}
return 0;
}
