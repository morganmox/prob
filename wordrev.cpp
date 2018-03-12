#include <iostream>
#include <stack>
using namespace std;

int main()
{
		string inp;
		int len = 0;
		cin >> inp;
		len = inp.length();
		stack<char> X;
		for(int i = 0;i<len;i++)
		{
			if(inp[i]!='_'){
				X.push(inp[i]);
			}else{
				while(!X.empty()){
					cout << X.top();
					X.pop();
				}
				cout << '_';
			}
		}
		while(!X.empty()){
			cout << X.top();
			X.pop();
		}
}