#include <iostream>
#include <stack>
using namespace std;
string reverse(string a)
{
	string x;
	for(int i = a.length()-1;i>=0;i--)
	{
		x+=a[i];
	}
	return x;
}
int main()
{
	int carry = 0,tmpint,biglen,smalllen;
	stack<int> res;
	string big,small,revbig,revsmall;
	cin >> big >> small;
	if(big.length()<small.length())
	{
		string tmp;
		tmp = big;
		big = small;
		small = tmp;
	}
	revbig = reverse(big);
	revsmall = reverse(small);
	biglen = revbig.length();
	smalllen = revsmall.length();
	for(int i = 0;i<biglen;i++)
	{
		if(i<smalllen){
			tmpint=(revsmall[i]+revbig[i]-96+carry);
		}else{
			tmpint=(revbig[i]+carry-48);
		}
		if(i!=biglen-1)
			res.push(tmpint%10);
		else
			res.push(tmpint);
		carry = tmpint/10;
	}
	while(!res.empty())
	{
		cout << res.top();
		res.pop();
	}
}