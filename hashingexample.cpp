// hashing problem first repeated character
#include<iostream>
using namespace std;
int main()
{
	string str;
	cout<<"Enter any string\n";
	cin>>str;
	int count[26]={0},flag=0,i;
	for( i=0;i<str.length();i++)
	{
			if(count[(str[i]-'a')]==1)
			{
				cout<<str[i];break;
			}
		else
				count[(str[i]-'a')]++;
 }
	if(i==str.length())
			cout<<"NO Repeated character";
return 0;
}
