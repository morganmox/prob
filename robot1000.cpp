#include <iostream>
#include <string>
using namespace std;

int main()
{
	string A;
	cin >> A;
	int x = 0 , y = 0, sizestr = A.length();
	for(int i = 0;i<sizestr;i++) {
		if(A[i]=='N') {
			y+=1;
		} else if (A[i]=='S') {
			y-=1;
		} else if (A[i]=='E') {
			x+=1;
		} else if (A[i]=='W') {
			x-=1;
		} else {
			x = 0;
			y = 0;
		}
	}
	cout << x << " " << y;
}