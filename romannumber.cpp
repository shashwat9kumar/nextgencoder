#include<iostream>
#include<string>
using namespace std;

int errorcheck(int x)              // to end program if number inputted is less than 1 or greater than 50
{
	if(x>50 || x<1)
	{
		return -1;
	}
	else
	{
		return 1;
	}
}

string romanintens(int x)               // to give roman numerals for the ten's position
{
	int d=x/10;
	switch(d)
	{
		case 0: return "";
		break;
		
		case 1: return "X";
		break;
		
		case 2: return "XX";
		break;
		
		case 3: return "XXX";
		break;
		
		case 4: return "XL";
		break;
		
		case 5: return "L";
		break;
	}
	return "";
}

string romaninones(int x)                // to give roman numerals for the one's position
{
	int d=x%10;
	switch(d)
	{
		case 0: return "";
		break;
		
		case 1: return "I";
		break;
		
		case 2: return "II";
		break;
		
		case 3: return "III";
		break;
		
		case 4: return "IV";
		break;
		
		case 5: return "V";
		break;
		
		case 6: return "VI";
		break;
		
		case 7: return "VII";
		break;
		
		case 8: return "VIII";
		break;
		
		case 9: return "IX";
		break;
	}
	return "";
}

int main(void)
{
	cout<<"Enter a number"<<endl;
	int x;
	cin>>x;
	int err=errorcheck(x);
	if(err==-1)
	{
		cout<<"Error"<<endl;
		return 0;
	}
	string str1=romanintens(x);
	string str2=romaninones(x);
	string str=str1+str2;                       // string concatenation
	cout<<str<<endl;
	return 0;
}
