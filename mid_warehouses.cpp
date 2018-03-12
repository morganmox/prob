#include <iostream>

using namespace std;

int car[200000][2];

bool search(int init,int dest)
{
	
}

int main()
{
	int N,M,K,tmp1,tmp2;
	cin >> N >> M >> K;
	for(int i = 0; i<M ; i++)
	{
		cin >> tmp1 >> tmp2;
		car[i][0] = tmp1;
		car[i][1] = tmp2;
	}
	for(int i = 0 ; i < K ; i++)
	{
		cin >> tmp1 >> tmp2;
		if(search(tmp1,tmp2))
			cout<<"1"<<endl;
		else
			cout<<"0"<<endl;
	}
}