#include <iostream>

using namespace std;
//2558 = K
int main()
{
	int year,tmp = 1;
	cin >> year;
	while(tmp!=0)
	{
		cin >> tmp;
		if(tmp!=0)
			year-=1;
	}
	if((year-2558)%2==0)
		cout << 'K';
	else
		cout << 'C';
}