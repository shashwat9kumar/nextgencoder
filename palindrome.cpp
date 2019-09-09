#include<iostream>
#include<string>
using namespace std;

int count(string x,int n)
{
	if(n==0)
	{
		return -1;
	}
	int c;                                //to count how many characters needed to be changed to convert string to palindrome
	for(int i=0,j=n-1;i<n/2;i++,j--)               
	{
		if(x[i]!=x[j])                         //checking for partiality, nullity or completeness of palindrome.
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
	
	for(int i=0;i<s.length();i++)            //converting string to uppercase
	{
		s[i]=toupper(s[i]);
	}
	
	int x=count(s,s.length());
	if(x==0)
	{
		cout<<"YES"<<endl;
	}
	else if(x==1)
	{
		cout<<"PARTIALLY"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
	return 0;
}
