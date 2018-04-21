// hashing second problem
#include<iostream>
#include<algorithm>
using namespace std;
int count(int x,int y[],int n,int noofy[])
{int ans;
	if(x==0)
			return 0;
	if(x==1)
			return noofy[0];
	int *idx=upper_bound(y,y+n,x);
	 ans=(y+n)-idx;
ans+=(noofy[0]+noofy[1]);
if(x==2)
		ans-=(noofy[3]+noofy[4]);
if(x==3)
		ans+=noofy[2];
return ans;
}
int countpairs(int x[],int y[],int m,int n)
{
	int noofy[5]={0},i;
for(i=0;i<n;i++)
		if(y[i]<5)
			noofy[y[i]]++;
sort(y,y+n);
int totalpar=0;
for(i=0;i<n;i++)
		totalpar+=count(x[i],y,n,noofy);
return totalpar;				
}
int main()
{
	int m,n,i;
cout<<"enter value of m and n\n";
cin>>m>>n;
			int x[m],y[n];
for(i=0;i<m;i++)
		cin>>x[i];
		for(i=0;i<n;i++)
			cin>>y[i];
cout<<countpairs(x,y,m,n)<<endl;
return 0;
}
