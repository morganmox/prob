#include <iostream>
#include <map>
//0 = count 1 = statNo
using namespace std;

int main()
{
	map<int,int> sta;
	int N,tmp,maxcount = 0,beststat = 0;
	cin>>N;
	for(int i = 0;i<N;i++)
	{
		cin>>tmp;
		sta[tmp] += 1;
		if(sta[tmp]>=maxcount)
		{
			maxcount = sta[tmp];
			beststat = tmp;
		}
		cout<<beststat<<endl;
	}
}