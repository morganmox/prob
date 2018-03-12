#include <iostream>

using namespace std;

void work(int i , int j)
{	
	int tmp,max = 0,count = 1;
	bool swap = false;
	if(j < i)
	{
		swap = true;
		tmp = j;
		j = i;
		i = tmp;
	}
	for(int x = i;x<=j;x++)
	{
		tmp = x;
		//cout << "total cycle for " << x << " = ";
		count = 1;
		while(tmp!=1)
		{
			if(tmp%2!=0)
				tmp = 3*tmp+1;
			else
				tmp = tmp/2;
			count+=1;
		}
		if(count>max)
			max = count;
		//cout << count << endl;	
	}
	if(!swap)
		cout << i << " " << j << " " << max << endl;
	else
		cout << j << " " << i << " " << max << endl;
}

int main()
{
	while(!cin.eof()) {
		int i,j;
		cin >> i;
		if(cin.eof()) {
			break;
		}
		cin >> j;
		work(i,j);
	}
}