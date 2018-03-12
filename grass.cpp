#include <iostream>

using namespace std;

char grass[100][100];

void printing(int n)
{
	for(int i = 0;i<n;i++)
	{
		for(int j = 0;j<n;j++)
		{
			cout<<grass[i][j];
		}
		cout<<endl;
	}
}

int main()
{
	int N,M,tmp3;
	char tmp2;
	string tmp;
	cin>>N>>M;
	for(int i = 0;i<N;i++)
	{
		cin>>tmp;
		for(int j = 0;j<N;j++)
			grass[i][j] = tmp[j];
	}
	for(int i = 0;i<M;i++)
	{
		cin>>tmp2>>tmp3;
		if(tmp2=='L')
		{
			for(int j = 0 ;j<N;j++)
				if(grass[tmp3-1][j]=='x')
					grass[tmp3-1][j] = '.';
				else
					break;
		}
		else if(tmp2=='R')
		{
			for(int j = N-1 ;j>=0;j--)
				if(grass[tmp3-1][j]=='x')
					grass[tmp3-1][j] = '.';
				else
					break;
		}
		else if(tmp2=='U')
		{
			for(int j = 0;j<N;j++)
				if(grass[j][tmp3-1]=='x')
					grass[j][tmp3-1] = '.';
				else
					break;
		}
		else if(tmp2=='D')
		{
			for(int j = N-1;j>=0;j--)
				if(grass[j][tmp3-1]=='x')
					grass[j][tmp3-1] = '.';
				else
					break;
		}
		else if(tmp2=='A')
		{
			for(int j = 0;j<N;j++)
				if(grass[tmp3-1][j]=='.')
					grass[tmp3-1][j] = 'x';
		}
		else if(tmp2=='B')
		{
			for(int j = 0;j<N;j++)
				if(grass[j][tmp3-1]=='.')
					grass[j][tmp3-1] = 'x';
		}
	}
	printing(N);
}