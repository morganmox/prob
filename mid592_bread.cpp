#include <iostream>
#include <math.h>
using namespace std;
//0 = address 1 = cost 2 = amount
int shop[100000][3];

int main()
{
	int N,Q,x,c,i,y,bestoffer = 1000001,buyingfrom = -666;
	cin>>N>>Q;
	for(int kk = 0;kk<N;kk++)
	{
		cin>>x>>c>>i;
		shop[kk][0] = x;
		shop[kk][1] = c;
		shop[kk][2] = i;
	}
//	for(int kk = 0;kk<N;kk++)
//		cout<<"address:"<<shop[kk][0]<<" price:"<<shop[kk][1]<<" amount:"<<shop[kk][2]<<endl;
	for(int kk = 0;kk<Q;kk++)
	{
		cin>>y;
		for(int g = 0;g<N;g++)
		{
			if(abs(shop[g][0]-y)<=5&&shop[g][1]<bestoffer&&shop[g][2]>0)
			{
				bestoffer = shop[g][1];
				buyingfrom = g;
			}
		}
		if(buyingfrom!=-666)
		{
			shop[buyingfrom][2]-=1;
			cout<<bestoffer<<endl;
		}
		else
			cout<<'0'<<endl;
		bestoffer = 1000001;buyingfrom = -666;
	}
}