#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int N,tmp,tmp2;
	cin >> N;
	for(int i = 0;i<N;i++)
	{
		cin >> tmp;
		tmp2 = (((tmp*63)+7492)*5-498)%100;
		tmp2 = (tmp2-tmp2%10)/10;
		cout<<abs(tmp2)<<endl;
	}
}