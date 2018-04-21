// hashing  problem 2
#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int compare(const void *a,const void *b)
{
	return *(char*)a- *(char*)b;
}
void remove(char s[])
{
	int last=0,current=0,i=0;
quicksort(s,strlen(s),sizeof(char),compare);
for(;s[current];i++){
		if(s[last]!=s[current])
				s[++last]=s[current];
			}
	s[last]='\0';
}
int main()
{
	char str[1000];
cout<<"Enter any string\n";
cin>>str;
remove(str);
return 0;
}
