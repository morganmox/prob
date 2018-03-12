#include <iostream>
using namespace std;

int main()
{
		string inp;
		int len = 0;
		cin >> inp;
		len = inp.length();
		for(int i = len-1;i>=0;i--)
		{
			cout << inp[i];
		}
}