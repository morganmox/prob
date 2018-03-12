#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int N,a,b,R,tmp1,tmp2,tmp3,res = 0,powR;
	cin >> N >> a >> b >> R;
	powR = pow(R,2);
	for(int i = 0;i<N;i++)
	{
		cin>> tmp1 >> tmp2;
		//cout<<"distance between std and alien = "<<pow(tmp1-a,2)+pow(tmp2-b,2)<<endl;
		tmp3 = pow(tmp1-a,2)+pow(tmp2-b,2);
		if(tmp3<=powR)
			//cout<<"yes"<<endl;
			res+=1;
	}
	cout<<res<<endl;
}