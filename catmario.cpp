#include <iostream>

using namespace std;

int level[100];

int main()
{
	for(int i =0;i<100;i++)
		level[i] = 600;
	int N,M,tmpvel,tmptime,sum = 0;
	cin>>N>>M;
	for(int i = 0;i<M;i++)
	{
		cin>>tmpvel>>tmptime;
		if(tmptime<level[tmpvel-1])
			level[tmpvel-1] = tmptime;
	}
	for(int i = 0;i<N;i++)
		sum+=level[i];
	cout<<sum<<endl;
	for(int i = 0;i<N;i++)
		cout<<i+1<<" "<<level[i]<<endl;
}