//hashing problem
#include<iostream>
using namespace std;
int main()
{
	 string str;
	 cin>>str;
	 int i,hash[26]={0};
	 for(i=0;i<str.length();i++)
	 			hash[str[i]-'a']++;
	for(i=0;i<26;i++)
			if(hash[str[i]-'a']==1)
					{cout<<str[i];break;
					}
	return 0;
}
