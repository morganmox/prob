#include <iostream>
#include <sstream>
#include <math.h>

using namespace std;
//ascii-65
int main()
{
	int N,ABC = 0,con = 2,tmp3 = 0;
	string tmp1,tmp2;
	cin>>N;
	for(int i = 0;i<N;i++)
	{
		cin>>tmp1;
		for(int i = 0;i<3;i++)
			ABC+=(int(tmp1[i])-65)*pow(26,con--);
		con = 2;
		tmp1.erase(0,tmp1.find('-')+1);
		stringstream geek(tmp1);
		geek >> tmp3;
		if(abs(tmp3-ABC)<=100)
			cout<<"nice"<<endl;
		else
			cout<<"not nice"<<endl;
		ABC = 0;
	}
}