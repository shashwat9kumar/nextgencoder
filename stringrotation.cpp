#include<iostream>
#include<string>
using namespace std;

int main(void)
{
	string str;
	cout<<"Enter a string"<<endl;
	cin>>str;
	int l=str.length();
	string arr[l];                // creation of array of same length as the length of string inputted
	arr[0]=str;                   //Setting the first rotation as the string inputted
	for(int i=1;i<l;i++)
	{
		string temp=arr[i-1];             //rotating every string by 1 place in comparison to the previous string.
		char ch=temp[0];
		for(int j=0;j<l-1;j++)
		{
			temp[j]=temp[j+1];
		}
		temp[l-1]=ch;
		arr[i]=temp;
	}
	for(int i=1;i<l;i++)               //printing all rotation but the original string
	{
		cout<<arr[i]<<"\t";
	}
	cout<<endl;
	return 0;
}
