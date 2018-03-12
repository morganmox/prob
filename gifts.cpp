#include <iostream>
using namespace std;

int main()
{
	int N,tmp,sum = 0;
	cin >> N;
	for(int i = 0;i<N;i++) {
		cin >> tmp;
		if(tmp>0) {
			sum+=tmp;
		}
	}
	cout << sum;
}