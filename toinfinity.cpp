#include <iostream>

using namespace std;

int main()
{
	bool imp = false;
	int N,tmp1,tmp2,tmp3,res = 1000001;
	cin>>N;
	for(int i = 0;i<N;i++)
	{
		cin>>tmp1>>tmp2>>tmp3;
		if(tmp2<0)
			tmp2 = tmp2*(-1);
		if(tmp2-tmp3<=0)
			imp = true;
		else if(tmp2-tmp3>0&&tmp2-tmp3<res)
			res = tmp2-tmp3;
	}
	if(imp)
		cout<<"-1";
	else
		cout<<res;
}