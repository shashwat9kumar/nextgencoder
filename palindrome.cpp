#include<iostream>
#include<string>
using namespace std;

int count(string x,int n)
{
	int c;
	for(int i=0,j=n-1;i<n/2;i++,j--)
	{
		if(x[i]!=x[j])
		{
			c++;
		}
	}
	return c;
}

int main(void)
{
	cout<<"Enter a string"<<endl;
	string s;
	cin>>s;
	int x=count(s,s.length());
	if(x==0)
	{
		cout<<"Palindrome"<<endl;
	}
	else if(x==1)
	{
		cout<<"Parially Palindrome"<<endl;
	}
	else
	{
		cout<<"Not Paalindrome"<<endl;
	}
	return 0;
}
