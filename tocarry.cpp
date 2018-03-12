#include <iostream>
#include <queue>
#include <math.h>

using namespace std;

queue<int> tobase2(int x)
{
	queue<int> base2;
	if(x==0){
		base2.push(0);
	}else{
		while(x!=1)
		{
			base2.push(x%2);
			x/=2;
		}
		base2.push(1);
	}
	return base2;
}

void work(int i , int j)
{
	queue<int> a = tobase2(i);
	queue<int> b = tobase2(j);
	queue<int> res;
	if(b.size()>a.size())
	{
		queue<int> tmp = b;
		b = a;
		a = tmp;
	}
	/*
	while(!a.empty())
	{
		cout<<a.front();
		a.pop();
	}
	cout << endl;
	while(!b.empty())
	{
		cout<<b.front();
		b.pop();
	}
	cout << endl;*/
	while(!b.empty())
	{
		if(a.front()+b.front()==2)
		{
			res.push(0);
		}else{
			res.push(a.front()+b.front());
		}
		b.pop();
		a.pop();
	}
	while(!a.empty())
	{
		res.push(a.front());
		a.pop();
	}
	int g = 0,finres = 0;
	while(!res.empty())
	{
	//	cout<<pow(2,g)<<endl;
		finres+=pow(2,g)*res.front();
//		cout<<finres<<endl;
		g+=1;
		res.pop();
	}
	cout<<finres<<endl;
	/*
	while(!res.empty())
	{
		cout<<res.front();
		res.pop();
	}
	cout << endl;*/
	
}

int main()
{
	while(!cin.eof()) {
		int i,j;
		cin >> i;
		if(cin.eof()) {
			break;
		}
		cin >> j;
		work(i,j);
	}
}