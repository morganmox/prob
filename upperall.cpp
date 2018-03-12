#include <iostream>
using namespace std;

int main()
{
		string inp;
		int len = 0;
		cin >> inp;
		len = inp.length();
		for(int i = 0;i<len;i++)
		{
			cout << char(toupper(inp[i]));
		}
}