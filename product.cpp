#include <iostream>
#include <map>
using namespace std;

int main()
{
	map<int,int>godunk;
	int N,tmp1,tmp2,tmp3;
	cin>>N;
	for(int i = 0;i<N;i++)
	{
		cin>>tmp1;
		if(tmp1==1)
		{
			cin>>tmp2>>tmp3;
			godunk[tmp2]+=tmp3;
		}
		else if(tmp1==2)
		{
			cin>>tmp2;
			cout<<godunk[tmp2]<<endl;
		}
		else if(tmp1==3)
		{
			cin>>tmp2>>tmp3;
			if(tmp3>=godunk[tmp2])
			{
				cout<<godunk[tmp2]<<endl;
				godunk.erase(tmp2);
			}
			else
			{
				cout<<tmp3<<endl;
				godunk[tmp2]-=tmp3;
			}
		}
	}
}	