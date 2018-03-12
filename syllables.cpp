#include <iostream>

using namespace std;

int main()
{
	int N,count = 0,tmplength = 0;
	bool combo = false;
	string tmp = "s";
	cin>>N;
	for(int i = 0;i<N;i++)
	{
		cin>>tmp;
		tmplength = tmp.length();
		for(int j = 0;j<tmplength;j++)
		{
			if((tmp[j]=='a'||tmp[j]=='e'||tmp[j]=='i'||tmp[j]=='o'||tmp[j]=='u')&&!combo)
			{
				//cout<<tmp[j];
				count+=1;
				combo = true;
				//cout<<combo;
			}
			else if((tmp[j]!='a'&&tmp[j]!='e'&&tmp[j]!='i'&&tmp[j]!='o'&&tmp[j]!='u')&&combo)
			{
			//	cout<<tmp[j];
				combo = false;
				//cout<<combo;
			}
		}
		cout<<count<<endl;
		count = 0;
		combo = false;
	}
}