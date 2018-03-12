#include <iostream>
#include <queue>

using namespace std;

int main()
{
	int card = -1;
	while(true)
	{
		queue<int>deck;
		cin>>card;
		if(card==0)
			break;
		for(int i = 1;i<=card;i++)
			deck.push(i);
		cout<<"Discarded cards:";
		while(true&&deck.size()>1)
		{
			cout<<" "<<deck.front();
			deck.pop();
			if(deck.size()!=1)
				cout<<",";
			else
				break;
			deck.push(deck.front());
			deck.pop();
		}
		cout<<endl<<"Remaining card: "<<deck.front()<<endl;
	}
}