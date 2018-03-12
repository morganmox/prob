#include <iostream>

using namespace std;

int input[1000];

int main()
{
	int N , M , tmp , pos = -1;
	cin >> N >> M;
	for(int i=0;i<N;i++)
	{
		cin >> tmp;
		input[i] = tmp;
	}
	for(int i=0;i<M;i++)
	{
		cin >> tmp;
		pos+=tmp;
		//cout<<"pos = "<<pos<<endl;
		if(pos>=N)
			pos = N-1;
		if(input[pos]!=0)
		{
			pos+=input[pos];
		//	cout<<"move pos = "<<pos<<endl;
		}
		if(pos<0)
			pos = -1;
	}
	cout << pos+1;
}