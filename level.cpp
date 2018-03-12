#include <iostream>

using namespace std;

int main()
{
	int con1[100];
	int con2[100];
	int con3[100];
	int N,M,tmp1,tmp2,tmp3,cur = 1;
	cin>>N>>M;
	for(int i = 1;i<N;i++)
	{
		cin >> tmp1 >> tmp2 >> tmp3;
		con1[i] = tmp1;
		con2[i] = tmp2;
		con3[i] = tmp3;
	}
	for(int i = 0;i<M;i++)
	{
		cin >> tmp1 >> tmp2 >> tmp3;
		if(tmp1>=con1[cur])
			con1[cur] = -1;
		if(tmp2>=con2[cur])
			con2[cur] = -1;
		if(tmp3>=con3[cur])
			con3[cur] = -1;
		if(con1[cur]==-1&&con2[cur]==-1&&con3[cur]==-1&&cur<=N)
			cur+=1;
	}
	cout<<cur<<endl;
}