#include <iostream>
using namespace std;

int maze[20][20];

int main()
{
	int N,K,tmp;
	cin>>N>>K;
	for(int i = 0;i<N;i++)
	{
		for(int j = 0;j<N;j++)
		{
			cin>>tmp;
			maze[i][j] = tmp;
		}
	}
	if()
		cout<<"yes";
	else
		cout<<"no";
}