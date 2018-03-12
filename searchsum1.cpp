#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int N,K,tmp,sum = 0;
	vector<int> book;
	book.push_back(0);
	cin>>N>>K;
	for(int i = 0;i<N;i++)
	{
		cin>>tmp;
		sum+=tmp;
		book.push_back(sum);
	}
	for(int i = 0;i<K;i++)
	{
		cin>>tmp;
		cout<<upper_bound(book.begin(), book.end(), tmp)-book.begin()-1<<endl;
	}
}