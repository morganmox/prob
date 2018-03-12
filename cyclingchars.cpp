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
			if(char(inp[i]+4)>'z'){
				cout << char(inp[i]-22);
			}else{
				cout << char(inp[i]+4);
			}
		}
}