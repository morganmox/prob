#include <iostream>

using namespace std;
//0 = number , 1 = score
int winner[4][2];
int place[4];
int main()
{
	int N,tmp1,number = 1,best = 0,tmpwin=-666,wina,winb;
	cin>>N;
	for(int i = 0;i<4;i++)
	{
		for(int j = 0;j<N;j++)
		{
			cin >> tmp1;
			if(tmp1>best)
			{
				best = tmp1;
				tmpwin = number;
			}
			number+=1;
		}
		winner[i][0] = tmpwin;
		winner[i][1] = best;
		best = 0;
		tmpwin = -666;
	}
	//for(int i = 0 ;i<4;i++)
	//	cout << "round" << i+1 << "winner = number " << winner[i][0] << "with score = " << winner[i][1] << endl;
	if(winner[0][1]>winner[1][1])
	{
		place[2] = winner[1][0];
		wina = 0;
	}
	else
	{
		wina = 1;
		place[2] = winner[0][0];
	}
	if(winner[2][1]>winner[3][1])
	{
		winb = 2;
		place[3] = winner[3][0];
	}
	else
	{
		winb = 3;
		place[3] = winner[2][0];
	}
	if(winner[wina][1]>winner[winb][1])
	{
		place[0] = winner[wina][0];
		place[1] = winner[winb][0];
	}
	else
	{
		place[0] = winner[winb][0];
		place[1] = winner[wina][0];
	}
	for(int i = 0;i<4;i++)
		cout<<place[i]<<endl;
}