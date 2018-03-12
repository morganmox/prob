#include <iostream>
#include <queue>
#include <math.h>
using namespace std;

void work(int N)
{
	queue<int> a;
	queue<int> b;
	int tmp,resa=0,resb=1000002;
	int list[N];
	for(int i = 0;i<N;i++)
	{
		cin>>tmp;
		list[i] = tmp;
	}
	cin>>tmp;
	for(int i = 0;i<N-1;i++)
	{
		for(int j = i+1;j<N;j++)
		{
			//cout<<"comparing"<<list[i]<<"and"<<list[j]<<endl;
			if(list[i]+list[j]==tmp)
			{
				a.push(list[i]);
				b.push(list[j]);
			}
		}
	}
	while(!a.empty())
	{
		if(abs(a.front()-b.front())<abs(resa-resb))
		{
			resb = b.front();
			resa = a.front();
		}
		a.pop();
		b.pop();
	}
	if(resb<resa)
	{
		tmp = resa;
		resa = resb;
		resb = tmp;
	}
	cout<<"Peter should buy books whose prices are "<<resa<<" and "<<resb<<"."<<endl<<endl;
}
int main()
{
	while(!cin.eof()) {
		int i;
		cin >> i;
		if(cin.eof()) {
			break;
		}
		work(i);
	}
}