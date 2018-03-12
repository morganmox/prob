#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	int N,first,tmpint;
	char tmp;
	cin >> N;
	cin >> first;
	for(int i = 1;i<=N-1;i++){
		cin >> tmp;
		cin >> tmpint;
		if(tmp == '+'){
			first+=tmpint;
		}else{
			first-=tmpint;
		}
	}
	cout << first;
}