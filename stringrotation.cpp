#include<iostream>
#include<string>
using namespace std;

int main(void)
{
	string str;
	cout<<"Enter a string"<<endl;
	cin>>str;
	int l=str.length();
	string arr[l];
	arr[0]=str;
	for(int i=1;i<l;i++)
	{
		string temp=arr[i-1];
		char ch=temp[0];
		for(int j=0;j<l-1;j++)
		{
			temp[j]=temp[j+1];
		}
		temp[l-1]=ch;
		arr[i]=temp;
	}
	for(int i=1;i<l;i++)
	{
		cout<<arr[i]<<"\t";
	}
	cout<<endl;
	return 0;
}
