#include <iostream>
using namespace std;

int main()
{
	int N,x,y;
	cin>>N;
	for(int i = 0;i<N;i++)
	{
		cin>>x>>y;
		cout<<(x/3)*(y/3)<<endl;
	}
}