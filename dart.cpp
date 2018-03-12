#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n,tmpx,tmpy,score = 0;
	double tmpd;
	cin >> n;
	for(int i = 0;i<n;i++) {
		cin >> tmpx >> tmpy;
		tmpd = sqrt(tmpx*tmpx+tmpy*tmpy);
		if(tmpd<=2) {
			score+=5;
		}else if(tmpd<=4) {
			score+=4;
		}else if(tmpd<=6) {
			score+=3;
		}else if(tmpd<=8) {
			score+=2;
		}else if(tmpd<=10) {
			score+=1;
		}
	}
	cout << score;
}