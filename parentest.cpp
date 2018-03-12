#include <iostream>
#include <stack>
using namespace std;

bool match(char a,char b)
{
	if((a=='{'&&b=='}')||(a=='['&&b==']')||(a=='('&&b==')'))
	{
		return true;
	}
	return false;
}

bool areparent(string input,int length)
{
	stack<char> X;
	for(int i = 0;i<length;i++)
	{
		if(input[i]=='{'||input[i]=='('||input[i]=='['){
			X.push(input[i]);
		}else{
			if(X.empty()||!match(X.top(),input[i]))
				return false;
			else
				X.pop();
		}
	}
	return X.empty();
}

int main()
{
	int N,len = 0;
	string inp;
	cin >> N;
	for(int i = 0;i<N;i++)
	{
		cin >> inp;
		len = inp.length();
		if(areparent(inp,len))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
}