#include <iostream>

using namespace std;

int main()
{
	int N,tmp1,tmp2,res = 0;
	cin >> N;
	cin >> tmp1;
	for(int i = 0;i<N-1;i++)
	{
		cin>>tmp2;
		if(tmp1-tmp2>10)
		{
			if(tmp1-tmp2>=70)
				res+=700;
			else
				res+=(tmp1-tmp2)*10;
		}
		tmp1 = tmp2;
	}
	cout<<res;
}