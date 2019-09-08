#include<iostream>
using namespace std;


char matrix[3][3];

void input()
{
	cout<<"Input the rows of TicTacToe game"<<endl;
	for(int i=0;i<3;i++)
	{
		cout<<"Input the "<<(i+1)<<"th row of the game"<<endl;
		for(int j=0;j<3;j++)
		{
			cin>>matrix[i][j];
		}
	}
}

int check()
{
	if(matrix[0][0]==matrix[0][1] && matrix[0][0]==matrix[0][2])
	{
		if(matrix[0][0]=='X')
		{
			return 1;
		}
		else if(matrix[0][0]=='O')
		{
			return 2;
		}
		else
		{
			return 0;
		}
	}
	else if(matrix[1][0]==matrix[1][1] && matrix[1][0]==matrix[1][2])
	{
		if(matrix[1][0]=='X')
		{
			return 1;
		}
		else if(matrix[1][0]=='O')
		{
			return 2;
		}
		else
		{
			return 0;
		}
	}
	else if(matrix[2][0]==matrix[2][1] && matrix[2][0]==matrix[2][2])
	{
		if(matrix[2][0]=='X')
		{
			return 1;
		}
		else if(matrix[2][0]=='O')
		{
			return 2;
		}
		else
		{
			return 0;
		}
	}
	else if(matrix[0][0]==matrix[1][0] && matrix[0][0]==matrix[2][0])
	{
		if(matrix[0][0]=='X')
		{
			return 1;
		}
		else if(matrix[0][0]=='O')
		{
			return 2;
		}
		else
		{
			return 0;
		}
	}
	else if(matrix[0][1]==matrix[1][1] && matrix[0][1]==matrix[2][1])
	{
		if(matrix[0][1]=='X')
		{
			return 1;
		}
		else if(matrix[0][1]=='O')
		{
			return 2;
		}
		else
		{
			return 0;
		}
	}
	else if(matrix[0][2]==matrix[1][2] && matrix[0][2]==matrix[2][2])
	{
		if(matrix[0][2]=='X')
		{
			return 1;
		}
		else if(matrix[0][2]=='O')
		{
			return 2;
		}
		else
		{
			return 0;
		}
	}
	else if(matrix[0][0]==matrix[1][1] && matrix[0][0]==matrix[2][2])
	{
		if(matrix[0][0]=='X')
		{
			return 1;
		}
		else if(matrix[0][0]=='O')
		{
			return 2;
		}
		else
		{
			return 0;
		}
	}
	else if(matrix[0][2]==matrix[1][1] && matrix[0][2]==matrix[2][0])
	{
		if(matrix[0][2]=='X')
		{
			return 1;
		}
		else if(matrix[0][2]=='O')
		{
			return 2;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
}

int main(void)
{
	input();
	int x=check();
	if(x==1)
	{
		cout<<"Player 1 won"<<endl;
	}
	else if(x==2)
	{
		cout<<"Player 2 won"<<endl;
	}
	else
	{
		cout<<"Draw"<<endl;
	}
	return 0;
}
